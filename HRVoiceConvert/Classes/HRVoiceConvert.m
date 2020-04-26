//
//  HRVoiceConvert.m
//  HRFramework
//
//  Created by 尹建军 on 2017/7/13.
//  Copyright © 2017年 浙江和仁科技股份有限公司. All rights reserved.
//

#import "HRVoiceConvert.h"
#import "amrFileCodec.h"

@implementation HRVoiceConvert

/**
 单例

 @return <#return value description#>
 */
+ (instancetype)shareInstance {
    static dispatch_once_t onceToken;
    static HRVoiceConvert *instance = nil;
    dispatch_once(&onceToken, ^{
        instance = [[HRVoiceConvert alloc] init];
    });
    return instance;
}

/**
 amr格式转wav

 @param amrData <#amrData description#>
 @return <#return value description#>
 */
- (NSData *)amrToWav:(NSData *)amrData {
    return DecodeAMRToWAVE(amrData);
}

/**
 wav格式转Amr

 @param wavData <#wavData description#>
 @return <#return value description#>
 */
- (NSData *)wavToAmr:(NSData *)wavData {
    return EncodeWAVEToAMR(wavData, 1, 16);
}

@end
