//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASTAPIShowNativeFormArgs, ASTAPIShowNativeFormContent, NSMutableArray, UIView;
@protocol ASTFormRendererDelegate;

@interface ASTFormRenderer : NSObject
{
    _Bool _contentNeedUpdate;
    UIView *_contentView;
    id <ASTFormRendererDelegate> _delegate;
    ASTAPIShowNativeFormArgs *_proto;
    ASTAPIShowNativeFormContent *_nativeFormContent;
    NSMutableArray *_constraints;
}

@property(retain, nonatomic) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property(nonatomic) _Bool contentNeedUpdate; // @synthesize contentNeedUpdate=_contentNeedUpdate;
@property(retain, nonatomic) ASTAPIShowNativeFormContent *nativeFormContent; // @synthesize nativeFormContent=_nativeFormContent;
@property(retain, nonatomic) ASTAPIShowNativeFormArgs *proto; // @synthesize proto=_proto;
@property(nonatomic) __weak id <ASTFormRendererDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)addConstraint:(id)arg1;
- (void)updateCurrentNativeFormContent:(id)arg1;
- (id)updateFieldView:(id)arg1 withProto:(id)arg2;
- (void)fillFieldGroup:(id)arg1 withProto:(id)arg2;
- (void)fillSubSection:(id)arg1 withProto:(id)arg2;
- (void)populateStackView:(id)arg1;
- (id)generateNativeFormInteractiveElement:(id)arg1;

@end

