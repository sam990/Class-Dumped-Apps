//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GDKDomainAttributes, GDKRefactoredAddPeopleVC, GDKRoleSelectorParams, GDKWhoHasAccessVC, NSArray, NSError, NSSet, NSString, UIView;
@protocol GDKFile, GDKWhoHasAccessVCDelegate;

@protocol GDKRefactoredAddPeopleVCDelegate <NSObject>
- (void)refactoredAddPeopleVC:(GDKRefactoredAddPeopleVC *)arg1 removedSelfFromFile:(id <GDKFile>)arg2;
- (void)refactoredAddPeopleVCDidTapLearnMore:(GDKRefactoredAddPeopleVC *)arg1;
- (void)refactoredAddPeopleVC:(GDKRefactoredAddPeopleVC *)arg1 didSelectPermissions:(NSSet *)arg2 withRole:(long long)arg3 message:(NSString *)arg4;
- (void)refactoredAddPeopleVC:(GDKRefactoredAddPeopleVC *)arg1 didTapRoleSelectorWithParams:(GDKRoleSelectorParams *)arg2 anchorView:(UIView *)arg3;
- (void)refactoredAddPeopleVC:(GDKRefactoredAddPeopleVC *)arg1 didRequestWhoHasAccessForFile:(id <GDKFile>)arg2 permissions:(NSArray *)arg3 domainAttributes:(GDKDomainAttributes *)arg4 delegate:(id <GDKWhoHasAccessVCDelegate>)arg5;
- (void)refactoredAddPeopleVC:(GDKRefactoredAddPeopleVC *)arg1 whoHasAccessAccessibilityPerformEscape:(GDKWhoHasAccessVC *)arg2;
- (void)refactoredAddPeopleVC:(GDKRefactoredAddPeopleVC *)arg1 sendDidFinishWithError:(NSError *)arg2;
- (void)refactoredAddPeopleVCSendRequested:(GDKRefactoredAddPeopleVC *)arg1;
- (void)refactoredAddPeopleVC:(GDKRefactoredAddPeopleVC *)arg1 closeRequestedForFile:(id <GDKFile>)arg2;
@end

