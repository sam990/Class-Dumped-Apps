//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEAwemeDetailTableViewControllerDelegate-Protocol.h"
#import "AWEDemaciaPlayerViewDelegate-Protocol.h"
#import "AWEModernFeedCellControllerProtocol-Protocol.h"
#import "IESVideoPlayerDelegate-Protocol.h"

@class AWEDemaciaPlayerView, AWEGeneralSearchModel, NSArray, NSIndexPath, NSString, UIButton, UIImageView, UILabel, UIView, YYLabel;
@protocol AWEAwemeDetailTableViewControllerProtocol, AWEModernFeedCellContext;

@interface AWEGeneralSearchMixVideoCellController : UIViewController <AWEAwemeDetailTableViewControllerDelegate, IESVideoPlayerDelegate, AWEDemaciaPlayerViewDelegate, AWEModernFeedCellControllerProtocol>
{
    _Bool _isTransfering;
    id <AWEModernFeedCellContext> _context;
    UIView *_backgroundView;
    UIView *_topBarView;
    UIButton *_topBarActionButton;
    UIImageView *_mixVideoIcon;
    UILabel *_titleLabel;
    YYLabel *_playTimesLabel;
    UILabel *_userLabel;
    UIView *_dividingLine;
    UIImageView *_arrowView;
    UIView *_playerBgView;
    AWEDemaciaPlayerView *_playerView;
    UIButton *_playControl;
    AWEGeneralSearchModel *_searchModel;
    NSArray *_contentArray;
    NSIndexPath *_selectedIndexPath;
    NSString *_keyWord;
    NSString *_searchId;
    NSString *_userID;
    NSString *_refString;
    UIViewController<AWEAwemeDetailTableViewControllerProtocol> *_detailVC;
}

+ (double)playerViewHeightWithModel:(id)arg1;
+ (id)convertAwemeModel:(id)arg1;
+ (double)modernFeedCellPreferedHeightForModel:(id)arg1 width:(double)arg2;
+ (void)__awe__codeRunnerRun_231;
@property(nonatomic) __weak UIViewController<AWEAwemeDetailTableViewControllerProtocol> *detailVC; // @synthesize detailVC=_detailVC;
@property(retain, nonatomic) NSString *refString; // @synthesize refString=_refString;
@property(nonatomic) _Bool isTransfering; // @synthesize isTransfering=_isTransfering;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *searchId; // @synthesize searchId=_searchId;
@property(copy, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(copy, nonatomic) NSArray *contentArray; // @synthesize contentArray=_contentArray;
@property(retain, nonatomic) AWEGeneralSearchModel *searchModel; // @synthesize searchModel=_searchModel;
@property(retain, nonatomic) UIButton *playControl; // @synthesize playControl=_playControl;
@property(retain, nonatomic) AWEDemaciaPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIView *playerBgView; // @synthesize playerBgView=_playerBgView;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIView *dividingLine; // @synthesize dividingLine=_dividingLine;
@property(retain, nonatomic) UILabel *userLabel; // @synthesize userLabel=_userLabel;
@property(retain, nonatomic) YYLabel *playTimesLabel; // @synthesize playTimesLabel=_playTimesLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *mixVideoIcon; // @synthesize mixVideoIcon=_mixVideoIcon;
@property(retain, nonatomic) UIButton *topBarActionButton; // @synthesize topBarActionButton=_topBarActionButton;
@property(retain, nonatomic) UIView *topBarView; // @synthesize topBarView=_topBarView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) id <AWEModernFeedCellContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)didClickCoverVideo:(id)arg1;
- (void)didClickPlayControlBtn:(id)arg1;
- (void)trackVideoWithTrackType:(id)arg1;
- (void)trackSearchResultShowEvent;
- (void)trackAction;
- (void)openDetail;
- (void)configContentArray:(id)arg1;
- (_Bool)detailTableViewControllerShouldUseFeedImageCache:(id)arg1;
- (void)detailTableViewController:(id)arg1 scrollDidEndAtIndexPath:(id)arg2 model:(id)arg3;
- (double)detailTableViewControllerInitialSeekTime:(id)arg1;
- (void)detailTableViewController:(id)arg1 didPauseDisplayingCellWithCurrentPlayingTime:(double)arg2;
- (void)didResignActiveForReason:(unsigned long long)arg1;
- (void)didBecomeActiveForReason:(unsigned long long)arg1;
- (id)timesAttributeString;
- (void)updateWithModel:(id)arg1;
- (void)updateWithReferString:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

