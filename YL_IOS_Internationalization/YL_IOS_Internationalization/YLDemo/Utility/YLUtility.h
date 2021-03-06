//
//  YLUtility.h
//  YL_IOS_Internationalization
//
//  Created by YouLing on 2016/12/25.
//  Copyright © 2016年 YouLing. All rights reserved.
//


/*
 *自定义语言的类型的存储的key
 */

#define CUSTOM_LANGUAGE   @"customCurerentLanguage"
/*
 *记录是否允许自定义语言的key
 */
#define WHETHER_CUSTOM_LANGUAGE @"WhetherCustomLanguage"
/*
 *本地的budle的本地话
 */
#define  NSLocalizedStringYL(key,table,comment) NSLocalizedStringFromTableInBundle(key, table, [YLUtility getLanguageBundle], comment)
/*
 *当修改语言时发送的通知
 */
#define YL_CHANGE_LANGUAGE @"YLCHANGELANGUAGE"

#import <Foundation/Foundation.h>

@interface YLUtility : NSObject

/*
 *获取记录是否让修改语言
 */
+(NSString*) getWhetherCustomLanguage;
/*
 *设置是否让修改语言
 */
+(BOOL) setWhetherCustomLanguage:(NSString*) Whether;


/*
 *获取当前系统的语言
 */
+(NSString*) getSysCurrentLanguage;
/*
 *获取当前自定义的语言
 */
+(NSString*) getCustomCurrentLanguage;
/*
 *设置当前自定义的语言
 */
+(void) setCuntomCurrentLanguage:(NSString*) customCurrntLanguage;
/*
 *获取NSBundle
 */
+(NSBundle*) getLanguageBundle;
/*
 *改变NSBundel
 */
+(NSBundle*) changeLanguageBundle:(NSString*) languageType;
@end
