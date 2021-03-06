//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/HATSQuestion.h>

#import <drive_extension_framework/HATSQuestionWithSelectableAnswers-Protocol.h>

@class NSArray, NSString;

@interface HATSQuestionMultipleSelect : HATSQuestion <HATSQuestionWithSelectableAnswers>
{
    NSArray *_ordering;
    NSArray *_answers;
    NSArray *_orderedAnswers;
}

@property(readonly, nonatomic) NSArray *orderedAnswers; // @synthesize orderedAnswers=_orderedAnswers;
@property(readonly, nonatomic) NSArray *answers; // @synthesize answers=_answers;
@property(readonly, nonatomic) NSArray *ordering; // @synthesize ordering=_ordering;
- (void).cxx_destruct;
- (id)initWithQuestionDefinition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

