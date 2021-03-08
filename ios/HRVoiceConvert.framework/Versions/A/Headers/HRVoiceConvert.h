//
//  HRVoiceConvert.h
//  HRFramework
//
//  Created by 尹建军 on 2017/7/13.
//  Copyright © 2017年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 声音转换
 */
@interface HRVoiceConvert : NSObject

/**
 单例

 @return <#return value description#>
 */
+ (instancetype)shareInstance;

/**
 amr格式转wav

 @param amrData <#amrData description#>
 @return <#return value description#>
 */
- (NSData *)amrToWav:(NSData *)amrData;

/**
 wav格式转Amr

 @param wavData <#wavData description#>
 @return <#return value description#>
 */
- (NSData *)wavToAmr:(NSData *)wavData;

@end
