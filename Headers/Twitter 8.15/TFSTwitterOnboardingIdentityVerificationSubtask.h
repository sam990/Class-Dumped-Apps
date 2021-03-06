//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterOnboardingSubtask.h>

@class NSString, TFSTwitterOnboardingNavigationLink, TFSTwitterOnboardingRichText;

@interface TFSTwitterOnboardingIdentityVerificationSubtask : TFSTwitterOnboardingSubtask
{
    TFSTwitterOnboardingRichText *_primaryText;
    TFSTwitterOnboardingRichText *_secondaryText;
    TFSTwitterOnboardingRichText *_detailText;
    NSString *_hintText;
    TFSTwitterOnboardingNavigationLink *_nextLink;
    TFSTwitterOnboardingNavigationLink *_failLink;
    TFSTwitterOnboardingNavigationLink *_cancelLink;
}

@property(readonly, nonatomic) TFSTwitterOnboardingNavigationLink *cancelLink; // @synthesize cancelLink=_cancelLink;
@property(readonly, nonatomic) TFSTwitterOnboardingNavigationLink *failLink; // @synthesize failLink=_failLink;
@property(readonly, nonatomic) TFSTwitterOnboardingNavigationLink *nextLink; // @synthesize nextLink=_nextLink;
@property(readonly, nonatomic) NSString *hintText; // @synthesize hintText=_hintText;
@property(readonly, nonatomic) TFSTwitterOnboardingRichText *detailText; // @synthesize detailText=_detailText;
@property(readonly, nonatomic) TFSTwitterOnboardingRichText *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(readonly, nonatomic) TFSTwitterOnboardingRichText *primaryText; // @synthesize primaryText=_primaryText;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 subtaskID:(id)arg2 typeName:(id)arg3 backNavigationType:(long long)arg4 backNavigationLink:(id)arg5 error:(id *)arg6;

@end

