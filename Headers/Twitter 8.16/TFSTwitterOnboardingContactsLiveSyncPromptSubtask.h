//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterOnboardingSubtask.h>

@class NSString, TFSTwitterOnboardingHeaderImage, TFSTwitterOnboardingNavigationLink, TFSTwitterOnboardingRichText;

@interface TFSTwitterOnboardingContactsLiveSyncPromptSubtask : TFSTwitterOnboardingSubtask
{
    NSString *_primaryText;
    TFSTwitterOnboardingRichText *_detailText;
    TFSTwitterOnboardingHeaderImage *_headerImage;
    TFSTwitterOnboardingNavigationLink *_nextLink;
    TFSTwitterOnboardingNavigationLink *_skipLink;
}

+ (id)isReadySubtaskDataKey;
+ (long long)version;
+ (id)typeNames;
@property(readonly, nonatomic) TFSTwitterOnboardingNavigationLink *skipLink; // @synthesize skipLink=_skipLink;
@property(readonly, nonatomic) TFSTwitterOnboardingNavigationLink *nextLink; // @synthesize nextLink=_nextLink;
@property(readonly, nonatomic) TFSTwitterOnboardingHeaderImage *headerImage; // @synthesize headerImage=_headerImage;
@property(readonly, nonatomic) TFSTwitterOnboardingRichText *detailText; // @synthesize detailText=_detailText;
@property(readonly, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 subtaskID:(id)arg2 typeName:(id)arg3 backNavigationType:(long long)arg4 backNavigationLink:(id)arg5 error:(id *)arg6;

@end

