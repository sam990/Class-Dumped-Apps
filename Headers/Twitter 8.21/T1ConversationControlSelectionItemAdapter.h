//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewAdapter.h>

@interface T1ConversationControlSelectionItemAdapter : TFNItemsDataViewAdapter
{
    CDUnknownBlockType _isSelectedCallback;
    CDUnknownBlockType _selectionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property(copy, nonatomic) CDUnknownBlockType isSelectedCallback; // @synthesize isSelectedCallback=_isSelectedCallback;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)initWithIsSelectedCallback:(CDUnknownBlockType)arg1 selectionHandler:(CDUnknownBlockType)arg2;

@end

