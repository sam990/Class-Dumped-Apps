//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage, UIView;

@protocol HMEChipViewMetadataProtocol <NSObject>
@property(readonly, nonatomic) Class cellClass;
@property(readonly, nonatomic) NSString *title;

@optional
@property(readonly, nonatomic) struct UIEdgeInsets titlePadding;
@property(readonly, nonatomic) struct UIEdgeInsets leadingImagePadding;
@property(readonly, nonatomic) _Bool showLeadingImageRound;
@property(readonly, nonatomic) UIImage *leadingImage;
@property(readonly, nonatomic) CDUnknownBlockType accessoryAction;
@property(readonly, nonatomic) UIView *accessoryView;
@property(readonly, nonatomic) CDUnknownBlockType primaryAction;
@end

