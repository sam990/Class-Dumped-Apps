//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSByteArray;

@interface JavaUtilBase64_Encoder : NSObject
{
    IOSByteArray *newline_;
    int linemax_;
    _Bool isURL_;
    _Bool doPadding_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (int)encode0WithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withByteArray:(id)arg4;
- (id)withoutPadding;
- (id)wrapWithJavaIoOutputStream:(id)arg1;
- (id)encodeWithJavaNioByteBuffer:(id)arg1;
- (id)encodeToStringWithByteArray:(id)arg1;
- (int)encodeWithByteArray:(id)arg1 withByteArray:(id)arg2;
- (id)encodeWithByteArray:(id)arg1;
- (int)outLengthWithInt:(int)arg1;
- (id)initWithBoolean:(_Bool)arg1 withByteArray:(id)arg2 withInt:(int)arg3 withBoolean:(_Bool)arg4;

@end

