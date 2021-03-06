//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEStudioBaseCollectionViewCell.h"

@class AWEMemojiModel, UIImageView, UIView;

@interface AWEMemojiCollectionViewCell : AWEStudioBaseCollectionViewCell
{
    _Bool _customSelected;
    AWEMemojiModel *_model;
    unsigned long long _cellType;
    UIImageView *_iconImageView;
    UIView *_selectedIndicatorView;
    UIImageView *_downloadImgView;
    UIImageView *_loadingImgView;
    long long _downloadStatus;
}

@property(nonatomic) long long downloadStatus; // @synthesize downloadStatus=_downloadStatus;
@property(retain, nonatomic) UIImageView *loadingImgView; // @synthesize loadingImgView=_loadingImgView;
@property(retain, nonatomic) UIImageView *downloadImgView; // @synthesize downloadImgView=_downloadImgView;
@property(retain, nonatomic) UIView *selectedIndicatorView; // @synthesize selectedIndicatorView=_selectedIndicatorView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) _Bool customSelected; // @synthesize customSelected=_customSelected;
@property(readonly, nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
@property(readonly, nonatomic) AWEMemojiModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)loadingImgStopRotate;
- (void)loadingImgStartRotate;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (id)createRotationAnimation;
- (void)updateDownloadStatus:(long long)arg1;
- (void)configWithEffectModel:(id)arg1 type:(unsigned long long)arg2;
- (void)addSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;

@end

