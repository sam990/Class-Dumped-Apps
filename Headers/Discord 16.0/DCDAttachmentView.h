//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DCDSpoilerOverlay, NSString;

@interface DCDAttachmentView : UIView
{
    NSString *_URL;
    DCDSpoilerOverlay *_spoilerOverlay;
}

@property(retain, nonatomic) DCDSpoilerOverlay *spoilerOverlay; // @synthesize spoilerOverlay=_spoilerOverlay;
@property(retain, nonatomic) NSString *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)handleTap:(id)arg1;
- (void)configure:(id)arg1 context:(id)arg2;
- (id)initWithAttachment:(id)arg1 context:(id)arg2;

@end

