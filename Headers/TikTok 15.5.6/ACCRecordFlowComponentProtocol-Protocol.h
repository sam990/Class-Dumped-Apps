//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCComponentProtocol-Protocol.h"

@class ACCAnimatedButton, ACCButton, UITapGestureRecognizer;

@protocol ACCRecordFlowComponentProtocol <ACCComponentProtocol>
@property(nonatomic, getter=isExporting) _Bool exporting;
@property(retain, nonatomic) ACCAnimatedButton *deleteButton;
@property(retain, nonatomic) ACCButton *completeButton;
- (void)fillChallengeNameForFragmentInfo;
- (void)p_deleteAllSegments;
- (void)stopRecordAndExportVideo;
- (void)stopRecordAndPossiblyExportVideo;
- (void)clickDeleteBtn:(id)arg1;
- (void)clickCompleteBtn:(UITapGestureRecognizer *)arg1;
- (void)updateCompleteButton;
@end

