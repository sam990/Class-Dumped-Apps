//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

#import <PSPDFKitUI/PSPDFSearchScopeViewable-Protocol.h>

@class NSString, UILabel;

@interface PSPDFSearchHeaderView : UITableViewHeaderFooterView <PSPDFSearchScopeViewable>
{
    UILabel *_scopeLabel;
    UILabel *_matchLabel;
}

@property(readonly, nonatomic) UILabel *matchLabel; // @synthesize matchLabel=_matchLabel;
@property(readonly, nonatomic) UILabel *scopeLabel; // @synthesize scopeLabel=_scopeLabel;
- (void).cxx_destruct;
- (void)configureWithDocument:(id)arg1 scope:(long long)arg2 pageIndexRange:(struct _NSRange)arg3 results:(unsigned long long)arg4;
- (void)updateViewConfiguration;
- (void)traitCollectionDidChange:(id)arg1;
- (void)tintColorDidChange;
- (void)didMoveToSuperview;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) UILabel *detailTextLabel; // @dynamic detailTextLabel;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UILabel *textLabel; // @dynamic textLabel;

@end

