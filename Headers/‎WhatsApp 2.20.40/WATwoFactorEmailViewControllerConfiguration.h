//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WATwoFactorEmailViewControllerConfiguration : NSObject
{
    _Bool _ignoresInvalidEmailInput;
    NSString *_helperLabelText;
    NSString *_rightBarButtonTitle;
    NSString *_leftBarButtonTitle;
    long long _currentPage;
    long long _numberOfPages;
}

@property(nonatomic) _Bool ignoresInvalidEmailInput; // @synthesize ignoresInvalidEmailInput=_ignoresInvalidEmailInput;
@property(nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(copy, nonatomic) NSString *leftBarButtonTitle; // @synthesize leftBarButtonTitle=_leftBarButtonTitle;
@property(copy, nonatomic) NSString *rightBarButtonTitle; // @synthesize rightBarButtonTitle=_rightBarButtonTitle;
@property(copy, nonatomic) NSString *helperLabelText; // @synthesize helperLabelText=_helperLabelText;
- (void).cxx_destruct;

@end

