//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (UtilityExtension)
+ (_Bool)jr_swizzleClassMethod:(SEL)arg1 withClassMethod:(SEL)arg2 error:(id *)arg3;
+ (_Bool)jr_swizzleMethod:(SEL)arg1 withMethod:(SEL)arg2 error:(id *)arg3;
- (void)performSelectorOnMainThreadWithArguments:(SEL)arg1;
- (id)invocationWithSelector:(SEL)arg1 andArguments:(char *)arg2;
- (id)valueData;
- (id)displayText;
- (struct _NSRange)slk_caretRange;
- (id)slk_text;
- (id)wordAtRange:(struct _NSRange)arg1 rangeInText:(struct _NSRange *)arg2;
- (id)wordAtCaretRange:(struct _NSRange *)arg1;
- (void)lookForPrefixes:(id)arg1 completion:(CDUnknownBlockType)arg2;
@end

