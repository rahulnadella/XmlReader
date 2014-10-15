/* 
 Copyright (c) 2012 Rahul Nadella
 
 Permission is hereby granted, free of charge, to any person
 obtaining a copy of this software and associated documentation
 files (the "Software"), to deal in the Software without
 restriction, including without limitation the rights to use,
 copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the
 Software is furnished to do so, subject to the following
 conditions:
 
 The above copyright notice and this permission notice shall be
 included in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 OTHER DEALINGS IN THE SOFTWARE.
 
 XMLReader.h
 
 Created by Rahul Nadella on 2/28/12.
 Copyright 2012 Rahul Nadella. All rights reserved.
 */

#import <Foundation/Foundation.h>
/*
 The XMLReader class provides the ability to the load blocks of XML files into a Core Data Model.
 
 @since 1.0
 @version 1.0
 */
@interface XMLReader : NSObject <NSXMLParserDelegate>
{
    NSMutableArray *dictionaryStack;
    NSMutableString *textInProgress;
    NSError *errorPointer;
}

/*
 Returns a NSDictionary based on the NSData format
 
 since 1.0
 
 @param data
        The specific NSData format
 @param errorPointer
        The specific NSError code
 */
+ (NSDictionary *)dictionaryForXMLData:(NSData *)data error:(NSError *)errorPointer;
/*
 Returns a NSString based on the NSData format
 
 since 1.0
 
 @param string
        The specific NSString format
 @param errorPointer
        The specific NSError code
 */
+ (NSDictionary *)dictionaryForXMLString:(NSString *)string error:(NSError *)errorPointer;
@end
