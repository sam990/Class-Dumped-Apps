//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseTextView.h>

#import <RedditUI/NSLayoutManagerDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

@interface BaseAttachmentTextView : BaseTextView <NSLayoutManagerDelegate>
{
    NSMutableDictionary *_attachedViews;
}

@property(retain, nonatomic) NSMutableDictionary *attachedViews; // @synthesize attachedViews=_attachedViews;
- (void).cxx_destruct;
- (id)text;
- (void)layoutAttachments;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(_Bool)arg3;
@property(copy, nonatomic) CDUnknownBlockType textTransform;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

