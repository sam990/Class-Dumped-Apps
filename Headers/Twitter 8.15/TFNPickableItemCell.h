//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTextCell.h>

@class UIImageView, UILabel;

@interface TFNPickableItemCell : TFNTextCell
{
    _Bool _editable;
    long long _accessoryType;
    UIImageView *_accessoryImageView;
    UILabel *_unpickableLabel;
}

+ (id)cellForTableView:(id)arg1 reuseIdentifier:(id)arg2 indexPath:(id)arg3 editable:(_Bool)arg4;
@property(readonly, nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
@property(readonly, nonatomic) UILabel *unpickableLabel; // @synthesize unpickableLabel=_unpickableLabel;
@property(readonly, nonatomic) UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
@property(nonatomic) long long accessoryType; // @synthesize accessoryType=_accessoryType;
- (void).cxx_destruct;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)_layoutUnpickableLabel;
- (void)_layoutAccessoryImageView;
- (void)updateAccessoryImageView:(_Bool)arg1;
- (id)accessoryView;

@end

