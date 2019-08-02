# HTCrashReporter

 HTCrashReporter是一款基于runtime防止系统容器类常见崩溃的拦截器，可有效防止数组越界，插入空值，字符串截取字串时越界，调用方法未找到等常见崩溃。
 
 #### HTCrashTypeStringAll:字符串所有崩溃
 #### HTCrashTypeStringRangeOrIndexOutOfBounds:字符串截取子串越界
 #### HTCrashTypeArrayAll:数组所有崩溃
 #### HTCrashTypeArrayIndexBeyondBounds:数组越界
 #### HTCrashTypeArrayAttemptToInsertNilObject:数组插入nil对象
 #### HTCrashTypeDictionaryAll:字典所有崩溃
 #### HTCrashTypeDictionaryAttemptToInsertNilObject:字典插入nil对象
 #### HTCrashTypeObjectAll:对象所有崩溃
 #### HTCrashTypeObjectKVO:KVO
 #### HTCrashTypeObjectUnrecognizedSelectorSentToInstance:未找到方法
 #### HTCrashTypeAll:所有崩溃
 
