//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTValidationUtil : NSObject
{
}

+ (_Bool)isValidPhone:(id)arg1;
+ (_Bool)isValid:(id)arg1 customRule:(id)arg2;
+ (_Bool)matchesRegex:(id)arg1 regex:(id)arg2;
+ (_Bool)isValid:(id)arg1 regexRule:(id)arg2;
+ (_Bool)isValid:(id)arg1 validationRule:(id)arg2;
+ (id)validateEmpty:(id)arg1;
+ (id)validate:(id)arg1 validationRuleset:(id)arg2;

@end
