//
//  HRVoiceConvert.m
//  HRFramework
//
//  Created by 尹建军 on 2017/7/13.
//  Copyright © 2017年 浙江和仁科技股份有限公司. All rights reserved.
//

#import "HRVoiceConvert.h"

#import "wav.h"
#import "interf_dec.h"
#import "dec_if.h"
#import "interf_enc.h"
#import "amrFileCodec.h"

@implementation HRVoiceConvert

/**
 Amr 转 Wav

 @param amrPath <#amrPath description#>
 @param savePath <#savePath description#>
 @return <#return value description#>
 */
+ (BOOL)amrToWav:(NSString *)amrPath wavSavePath:(NSString *)savePath {
    if (!DecodeAMRFileToWAVEFile([amrPath cStringUsingEncoding:NSASCIIStringEncoding], [savePath cStringUsingEncoding:NSASCIIStringEncoding])) {
        return NO;
    }
    return YES;
}

/**
 Wav 转 Amr

 @param wavPath <#wavPath description#>
 @param savePath <#savePath description#>
 @return <#return value description#>
 */
+ (BOOL)wavToAmr:(NSString *)wavPath amrSavePath:(NSString *)savePath {
    if (EncodeWAVEFileToAMRFile([wavPath cStringUsingEncoding:NSASCIIStringEncoding], [savePath cStringUsingEncoding:NSASCIIStringEncoding], 1, 16)) {
        return NO;
    }
    return YES;
}
    
@end
