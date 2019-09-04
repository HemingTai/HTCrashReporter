//
//  HTCrashConfiguration.h
//  Exercise_OC
//
//  Created by Hem1ng on 2019/7/24.
//  Copyright © 2019 Hem1ng. All rights reserved.
//

#import <UIKit/UIKit.h>

// !!!: ==================== Const ====================

//! 日志标题线
UIKIT_EXTERN NSString * const HTCrashReporterTitleSeparator;
//! 日志分隔线
UIKIT_EXTERN NSString * const HTCrashReporterBottomSeparator;

// !!!: ==================== Enums ====================

//! 崩溃类型
typedef NS_OPTIONS(NSUInteger, HTCrashType) {
    //! 字符串所有崩溃
    HTCrashTypeStringAll = 1 << 0,
    //! 字符串截取子串越界
    HTCrashTypeStringRangeOrIndexOutOfBounds = 1 << 1,
    //! 数组所有崩溃
    HTCrashTypeArrayAll = 1 << 2,
    //! 数组越界
    HTCrashTypeArrayIndexBeyondBounds = 1 << 3,
    //! 数组插入nil对象
    HTCrashTypeArrayAttemptToInsertNilObject = 1 << 4,
    //! 字典所有崩溃
    HTCrashTypeDictionaryAll = 1 << 5,
    //! 字典插入nil对象
    HTCrashTypeDictionaryAttemptToInsertNilObject = 1 << 6,
    //! 对象所有崩溃
    HTCrashTypeObjectAll = 1 << 7,
    //! KVO
    HTCrashTypeObjectKVO = 1 << 8,
    //! 未找到方法
    HTCrashTypeObjectUnrecognizedSelectorSentToInstance = 1 << 9,
    //! 定时器未被清除
    HTCrashTypeTimerIsNotCleaned = 1 << 10,
    //! 所有崩溃
    HTCrashTypeAll = 1 << 11,
};
