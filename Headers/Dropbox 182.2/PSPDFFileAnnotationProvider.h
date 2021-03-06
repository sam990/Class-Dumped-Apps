//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKit/PSPDFContainerAnnotationProvider.h>

@class NSIndexSet, NSMutableIndexSet, NSString, PSPDFDispatchQueue;
@protocol PSPDFAnnotationProviderChangeNotifier, PSPDFCustomConcurrentQueue;

@interface PSPDFFileAnnotationProvider : PSPDFContainerAnnotationProvider
{
    _Bool _didLoadDiskFile;
    NSString *_annotationsPath;
    id <PSPDFAnnotationProviderChangeNotifier> _providerDelegate;
    unsigned long long _autodetectTextLinkTypes;
    NSMutableIndexSet *_pagesParsed;
    NSIndexSet *_pagesParsedAtomicCache;
    unsigned long long _saveableTypes;
    unsigned long long _parsableTypes;
    PSPDFDispatchQueue<PSPDFCustomConcurrentQueue> *_annotationPropertyAccessQueue;
}

+ (id)filterAnnotationsInDictionary:(id)arg1 allowedTypes:(unsigned long long)arg2;
@property(readonly, nonatomic) PSPDFDispatchQueue<PSPDFCustomConcurrentQueue> *annotationPropertyAccessQueue; // @synthesize annotationPropertyAccessQueue=_annotationPropertyAccessQueue;
@property(nonatomic) unsigned long long parsableTypes; // @synthesize parsableTypes=_parsableTypes;
@property(nonatomic) unsigned long long saveableTypes; // @synthesize saveableTypes=_saveableTypes;
@property(retain) NSIndexSet *pagesParsedAtomicCache; // @synthesize pagesParsedAtomicCache=_pagesParsedAtomicCache;
@property(readonly, nonatomic) NSMutableIndexSet *pagesParsed; // @synthesize pagesParsed=_pagesParsed;
@property(nonatomic) unsigned long long autodetectTextLinkTypes; // @synthesize autodetectTextLinkTypes=_autodetectTextLinkTypes;
- (void)setProviderDelegate:(id)arg1;
- (id)providerDelegate;
- (void).cxx_destruct;
- (id)annotationsPath;
- (_Bool)writeAnnotationsToExternalFileForDocument:(id)arg1 undoController:(id)arg2 error:(id *)arg3;
- (void)syncAnnotationsToCoreForDocumentProvider:(id)arg1 annotationProvider:(const nn_3945b201 *)arg2 undoController:(id)arg3;
- (_Bool)saveAnnotationsWithOptions:(id)arg1 error:(id *)arg2;
- (id)loadAnnotationsWithError:(id *)arg1;
- (_Bool)shouldLoadSaveAnnotationExternally;
- (_Bool)tryLoadAnnotationsFromFileWithError:(id *)arg1;
- (void)removeDeletedAnnotations;
- (id)annotations;
- (void)clearCache;
- (id)removeAnnotations:(id)arg1 options:(id)arg2;
- (_Bool)allowAnnotationZIndexMoves;
- (_Bool)insertAnnotation:(id)arg1 atZIndex:(unsigned long long)arg2 options:(id)arg3 error:(id *)arg4;
- (id)addAnnotations:(id)arg1 options:(id)arg2;
- (id)filterAnnotationsForDocumentProvider:(id)arg1;
- (void)checkAnnotationsPageIndexes:(id)arg1;
- (id)newAnnotationOnPage:(unsigned long long)arg1 withParseableTypes:(unsigned long long)arg2 inDocumentProvider:(id)arg3 withDocument:(id)arg4 formParser:(id)arg5 forCoreAnnotation:(const nn_d8c5fc0d *)arg6 collectingActionsIn:(id)arg7;
- (_Bool)isEntirelyBackedByCore;
- (_Bool)willUseExternalStorage;
- (_Bool)usesExternalStorage;
- (void)updateAnnotationsDocumentReference:(id)arg1;
- (void)willInsertAnnotations:(id)arg1;
- (void)resolveReferencedAnnotationsForActions:(id)arg1 annotations:(id)arg2;
- (id)parseAnnotationsForPageAtIndex:(unsigned long long)arg1;
- (void)didChangeAnnotation:(id)arg1 keyPaths:(id)arg2 options:(id)arg3;
- (_Bool)hasLoadedAnnotationsForPageAtIndex:(unsigned long long)arg1;
- (id)annotationsForPageAtIndex:(unsigned long long)arg1;
- (id)needsWriterStatus_parseAndCacheAnnotationsForPageIndex:(unsigned long long)arg1;
- (void)needsWriterStatus_addAnnotations:(id)arg1 toPageCacheAtIndex:(unsigned long long)arg2;
- (_Bool)needsReaderStatus_needsAnnotationMergeForPageAtIndex:(unsigned long long)arg1;
- (void)needsWriterStatus_updatePagesParsedAtomicCache;
- (void)loadDiskFileIfNeeded;
- (id)initWithDocumentProvider:(id)arg1 fileURL:(id)arg2;
- (id)initWithDocumentProvider:(id)arg1;

@end

