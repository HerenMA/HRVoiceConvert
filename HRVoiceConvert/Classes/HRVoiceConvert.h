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
 amr转wav文件

 @param amrData amr数据
 @return wav数据
 */
+ (NSData *)convertAmrToWavFile:(NSData *)amrData;

/**
 wav转amr文件

 @param wavData wav数据
 @return amr数据
 */
+ (NSData *)convertWavToAmrFile:(NSData *)wavData;

/**
 amr转wav

 @param amrData amr数据
 @return wav数据
 */
+ (NSData *)convertAmrToWav:(NSData *)amrData;

/**
 wav转amr

 @param wavData wav数据
 @return amr数据
 */
+ (NSData *)convertWavToAmr:(NSData *)wavData;

@end
