//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <InstagramAppCoreFramework/IGLeadGenCollectionViewDynamicSizingCell-Protocol.h>

@class NSString, UILabel;

@interface IGLeadGenEndStageBodyCell : UICollectionViewCell <IGLeadGenCollectionViewDynamicSizingCell>
{
    UILabel *_paragraph;
}

- (void).cxx_destruct;
- (struct CGSize)dynamicSizeWithConstrainingSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)configureWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

