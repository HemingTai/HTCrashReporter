# HTCrashReporter

 HTCrashReporter是一款基于runtime捕获系统常见崩溃的拦截器，可有效防止数组越界，字典插入空值，字符串下标越界，未找到方法等常见崩溃。
 
 #### <a href="#1">HTCrashTypeStringAll:字符串所有崩溃</a>
    NSString *nilString = nil;
    NSString *origin = @"abcdefgh";
    NSLog(@"--%hu",[origin characterAtIndex:20]);
    NSLog(@"--%@",[origin substringFromIndex:100]);
    NSLog(@"--%@",[origin substringToIndex:100]);
    NSLog(@"--%@",[origin substringWithRange:NSMakeRange(3, 40)]);
    NSLog(@"--%@", [origin stringByReplacingCharactersInRange:NSMakeRange(2, 20) withString:@"asd"]);
    NSLog(@"--%@", [origin stringByReplacingOccurrencesOfString:nilString withString:nilString]);
    NSLog(@"--%@", [origin stringByReplacingOccurrencesOfString:@"a" withString:@"d" options:NSCaseInsensitiveSearch range:NSMakeRange(8, 20)]);
    NSMutableString *mStr = [NSMutableString stringWithFormat:@"asdsadfasf"];
    [mStr replaceCharactersInRange:NSMakeRange(0, 34) withString:@"asd"];
    [mStr insertString:@"asdsa" atIndex:20];
    [mStr deleteCharactersInRange:NSMakeRange(0, 30)];
 #### HTCrashTypeStringRangeOrIndexOutOfBounds:字符串截取子串越界
    见 <a name="1">HTCrashTypeStringAll</a>
 #### HTCrashTypeArrayAll:数组所有崩溃
 #### HTCrashTypeArrayIndexBeyondBounds:数组越界
 #### HTCrashTypeArrayAttemptToInsertNilObject:数组插入nil对象
 #### HTCrashTypeDictionaryAll:字典所有崩溃
 #### HTCrashTypeDictionaryAttemptToInsertNilObject:字典插入nil对象
 #### HTCrashTypeObjectAll:对象所有崩溃
 #### HTCrashTypeObjectKVO:KVO
 #### HTCrashTypeObjectUnrecognizedSelectorSentToInstance:未找到方法
 #### HTCrashTypeAll:所有崩溃
 
