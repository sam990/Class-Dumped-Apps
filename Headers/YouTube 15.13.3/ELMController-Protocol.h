//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class ASDisplayNode, CAAnimation, ELMComponent, ELMElement, NSArray, NSString, UIAccessibilityCustomAction;
@protocol ELMController, ELMDisplayNode, NSCopying;

@protocol ELMController <NSObject>
@property(readonly, nonatomic) __weak ELMComponent *owningComponent;
@property(nonatomic) _Bool shouldInvertStrongReference;
@property(readonly, nonatomic) id <ELMController> materializedInstance;
@property(nonatomic) int loggingNodeId;
@property(nonatomic) _Bool isRoot;
@property(readonly, nonatomic) ELMElement *element;
@property(readonly, nonatomic) NSArray *children;
@property(readonly, nonatomic) NSString *key;
@property(readonly, nonatomic) ASDisplayNode<ELMDisplayNode> *node;
- (_Bool)performAccessibilityCustomAction:(UIAccessibilityCustomAction *)arg1;
- (void)willChangeHighlight:(_Bool)arg1;
- (void)setOnNodeDidPerformAccessibilityCustomAction:(void (^)(id <ELMController>, id <ELMContext>, UIAccessibilityCustomAction *))arg1 forKey:(id <NSCopying>)arg2;
- (void)setOnNodeWillChangeHighlight:(void (^)(id <ELMController>, _Bool))arg1 forKey:(id <NSCopying>)arg2;
- (void)setOnNodeDidExitVisibleState:(void (^)(id <ELMController>, id <ELMContext>))arg1 forKey:(id <NSCopying>)arg2;
- (void)setOnNodeDidEnterVisibleState:(void (^)(id <ELMController>, id <ELMContext>))arg1 forKey:(id <NSCopying>)arg2;
- (void)setOnNodeWillCalculateLayout:(void (^)(id <ELMController>, id <ELMContext>, struct))arg1 forKey:(id <NSCopying>)arg2;
- (void)setOnNodeDidLayout:(void (^)(id <ELMController>, id <ELMContext>))arg1 forKey:(id <NSCopying>)arg2;
- (void)setOnNodeDidLoad:(void (^)(id <ELMController>, id <ELMContext>))arg1 forKey:(id <NSCopying>)arg2;
- (id)extendedPropertyForKey:(id <NSCopying>)arg1;
- (void)setExtendedProperty:(id)arg1 forKey:(id <NSCopying>)arg2;
- (void)setAppearanceAnimation:(CAAnimation *)arg1;
- (void)remove:(id <ELMController>)arg1;
- (void)move:(id <ELMController>)arg1 toIndex:(int)arg2;
- (void)replace:(id <ELMController>)arg1 with:(id <ELMController>)arg2;
- (void)insert:(id <ELMController>)arg1 atIndex:(unsigned long long)arg2;
- (void)append:(id <ELMController>)arg1;
- (void)updateWithElement:(ELMElement *)arg1;
- (_Bool)shouldUpdateWithElement:(ELMElement *)arg1;
- (void)setOwningComponent:(ELMComponent *)arg1 retained:(_Bool)arg2;
- (id)debugQuickLookObject;
@end
