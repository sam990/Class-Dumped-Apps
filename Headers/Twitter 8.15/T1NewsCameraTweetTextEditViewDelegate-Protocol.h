//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString, T1ComposeTypeaheadResult, T1NewsCameraTweetTextEditView;

@protocol T1NewsCameraTweetTextEditViewDelegate <NSObject>

@optional
- (void)newsCameraTweetTextEditView:(T1NewsCameraTweetTextEditView *)arg1 didUpdateAutocompleteResult:(T1ComposeTypeaheadResult *)arg2;
- (void)newsCameraTweetTextEditViewDidEndAutocomplete:(T1NewsCameraTweetTextEditView *)arg1;
- (void)newsCameraTweetTextEditViewDidBeginAutocomplete:(T1NewsCameraTweetTextEditView *)arg1;
- (void)newsCameraTweetTextEditView:(T1NewsCameraTweetTextEditView *)arg1 didChangeInputLocalIdentifier:(NSString *)arg2;
- (void)newsCameraTweetTextEditView:(T1NewsCameraTweetTextEditView *)arg1 didChangeText:(NSString *)arg2;
- (void)newsCameraTweetTextEditViewDidScrollHiddenContent:(T1NewsCameraTweetTextEditView *)arg1;
- (void)newsCameraTweetTextEditViewDidEndEditing:(T1NewsCameraTweetTextEditView *)arg1;
- (void)newsCameraTweetTextEditViewDidBeginEditing:(T1NewsCameraTweetTextEditView *)arg1;
- (_Bool)newsCameraTweetTextEditViewShouldBeginEditing:(T1NewsCameraTweetTextEditView *)arg1;
@end

