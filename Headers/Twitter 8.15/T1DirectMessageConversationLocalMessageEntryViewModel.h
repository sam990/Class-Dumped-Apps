//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1DirectMessageActivityEntryViewModel.h>

@class NSString, TFSFlavoredRange;

@interface T1DirectMessageConversationLocalMessageEntryViewModel : T1DirectMessageActivityEntryViewModel
{
    _Bool _didParseMessageText;
    NSString *_text;
    TFSFlavoredRange *_showMoreLinkRange;
}

+ (id)showMoreLinkAttributes;
+ (id)showMoreLinkColor;
- (void).cxx_destruct;
- (void)_parseMessageEntryText;
- (id)text;
- (id)showMoreTextRange;

@end

