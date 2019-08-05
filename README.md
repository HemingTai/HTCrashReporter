# HTCrashReporter

 HTCrashReporter是一款基于runtime捕获系统常见崩溃的拦截器，可有效防止数组越界，字典插入空值，字符串下标越界，未找到方法等常见崩溃。
 
 #### [HTCrashTypeStringRangeOrIndexOutOfBounds:字符串截取子串越界](#stringAll)
 #### [HTCrashTypeArrayIndexBeyondBounds:数组越界](#arrayAll)
 #### [HTCrashTypeArrayAttemptToInsertNilObject:数组插入nil对象](#arrayAll)
 #### [HTCrashTypeDictionaryAttemptToInsertNilObject:字典插入nil对象](#dictionaryAll)
 #### [HTCrashTypeObjectUnrecognizedSelectorSentToInstance:未找到方法](#objectAll)
 #### [HTCrashTypeObjectKVO:KVO](#objectAll)
 #### <span id="objectAll">HTCrashTypeObjectAll:对象所有崩溃</span>
    [NSObject ht_interceptObjectAllCrash];
 #### <span id="all">HTCrashTypeAll:所有崩溃</span>
    [NSArray ht_interceptArrayAllCrash];
    [NSObject ht_interceptObjectAllCrash];
    [NSString ht_interceptStringAllCrash];
    [NSDictionary ht_interceptDictionaryAllCrash];
 #### <span id="stringAll">HTCrashTypeStringAll:字符串所有崩溃</span>
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
#### <span id="arrayAll">HTCrashTypeArrayAll:数组所有崩溃</span>
    NSString *nilString = nil;
    NSArray *array1 = @[@"1",nilString,@"2"];
    NSMutableArray *array = [NSMutableArray new];
    [array setObject:nilString atIndexedSubscript:0];
    [array setObject:@"1" atIndexedSubscript:1];
    [array removeObjectAtIndex:2];
    [array insertObject:nilString atIndex:3];
#### <span id="dictionaryAll">HTCrashTypeDictionaryAll:字典所有崩溃</span>
    NSString *nilString = nil;
    NSDictionary *dic = @{@"title": nilString};
    NSMutableDictionary *mDic = dic.mutableCopy;
    mDic[nilString] = @"asd";
    [mDic removeObjectForKey:nilString];
    [mDic setObject:nilString forKey:@"key"];
