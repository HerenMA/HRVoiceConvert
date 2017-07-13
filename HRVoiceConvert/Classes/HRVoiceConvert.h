//
//  HRVoiceConvert.h
//  HRFramework
//
//  Created by 尹建军 on 2017/7/13.
//  Copyright © 2017年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Wav、Amr 互转
 */
@interface HRVoiceConvert : NSObject

/**
 Amr 转 Wav

 @param amrPath <#amrPath description#>
 @param savePath <#savePath description#>
 @return <#return value description#>
 */
+ (BOOL)amrToWav:(NSString *)amrPath wavSavePath:(NSString *)savePath;

/**
 Wav 转 Amr

 @param wavPath <#wavPath description#>
 @param savePath <#savePath description#>
 @return <#return value description#>
 */
+ (BOOL)wavToAmr:(NSString *)wavPath amrSavePath:(NSString *)savePath;

@end
