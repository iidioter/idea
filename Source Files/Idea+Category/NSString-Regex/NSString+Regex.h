//
//  NSString+Regex.h
//  Idea
//
//  Created by Harry on 14/12/31.
//  Copyright (c) 2014年 Harry. All rights reserved.
//

#import <Foundation/Foundation.h>


#if __REGEX_KIT_LITE__


/** 科学计数法正则表达式 */
#define REGEX_SCIEN                       (@"^((\\d+.?\\d+)[Ee]{1}(\\d+))$")

/** 手机号验证正则表达式 */
#define REGEX_MOBILE                      (@"^1(3|5|8)[0-9]{9}$")

/** 金额格式正则表达式 */
#define REGEX_AMOUNT                      (@"^[-]?[\\d]{1,10}([.]{1}[\\d]{1,2})?$")

/** yyyyMM正则表达式 */
#define REGEX_MONTH                       (@"^([1-9]\\d{3})(([0][1-9])|([1][0-2]))$")

/** yyyyMMdd日期格式正则表达式 */
#define REGEX_DATE                        (@"(([0-9]{3}[1-9]|[0-9]{2}[1-9][0-9]{1}|[0-9]{1}[1-9][0-9]{2}|[1-9][0-9]{3})(((0[13578]|1[02])(0[1-9]|[12][0-9]|3[01]))|((0[469]|11)(0[1-9]|[12][0-9]|30))|(02(0[1-9]|[1][0-9]|2[0-8]))))|((([0-9]{2})(0[48]|[2468][048]|[13579][26])|((0[48]|[2468][048]|[3579][26])00))0229)")

/** Email验证正则表达式 */
#define REGEX_EMAIL                       (@"^(([_\\w-\\.]+)@((\\[[0-9]{1,3}\\.[0-9]{1,3}\\.[0-9]{1,3}\\.)|(([_\\w-]+\\.)+))([a-zA-Z]{2,4}|[0-9]{1,3})(\\]?))$")


@interface NSString (Regex)

- (BOOL)EMAIL;
- (BOOL)PHONE;

@end

#endif



