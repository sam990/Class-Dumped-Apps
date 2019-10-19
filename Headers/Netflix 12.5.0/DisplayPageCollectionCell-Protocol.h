//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AbstractDisplayPageCellViewModel, NSIndexPath, NSString;
@protocol NFUIDisplayPageCellViewModelProtocol;

@protocol DisplayPageCollectionCell <NSObject>
@property(retain, nonatomic) AbstractDisplayPageCellViewModel *model;
@property(nonatomic) __weak id collectionViewController;
- (void)configureWithData:(id <NFUIDisplayPageCellViewModelProtocol>)arg1 withIndexPath:(NSIndexPath *)arg2 isLayoutPass:(_Bool)arg3;

@optional
- (void)setCellWillMeasureTTR:(_Bool)arg1;
- (void)willDisplay:(_Bool)arg1;
- (void)doLayout:(double)arg1;
- (void)configureDelegate:(id)arg1 withIdentifier:(NSString *)arg2;
@end
