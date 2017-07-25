//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICScrollViewDelegateViewController.h"

#import "ICFolderListDelegate.h"
#import "ICProgressIndicatorTrackerDelegate.h"
#import "ICSearchViewControllerDelegate.h"
#import "NSFetchedResultsControllerDelegate.h"
#import "UISearchControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIViewControllerPreviewingDelegate_Deprecated.h"

@class ICListTableView, ICNoteEditorViewController, ICNotesListCellHandler, ICNotesListSummaryView, ICProgressIndicatorTracker, ICSearchViewController, ICSelectorDelayer, NSArray, NSDate, NSFetchedResultsController, NSIndexPath, NSMutableSet, NSString, UIActivityIndicatorView, UIBarButtonItem, UILabel, UINavigationController, UIView;

@interface ICNotesListViewController : ICScrollViewDelegateViewController <NSFetchedResultsControllerDelegate, UITableViewDataSource, UITableViewDelegate, ICFolderListDelegate, UISearchControllerDelegate, ICSearchViewControllerDelegate, ICProgressIndicatorTrackerDelegate, UIViewControllerPreviewingDelegate_Deprecated>
{
    _Bool _avoidNoteSelectionInViewDidAppear;
    _Bool _headerViewLabelIsSingleLine;
    _Bool _updateSelectionOnInsert;
    _Bool _autoScrollToSelectionOnNoteModification;
    _Bool _needsHidingSearchBar;
    _Bool _didReceiveContextRefreshNotification;
    _Bool _showLoadingOverlay;
    _Bool _didBeginUpdatingFromFetchedResultsController;
    _Bool _reloadDataAfterEndUpdates;
    _Bool _wasDisplayed;
    _Bool _isMovingOrDeletingNotes;
    _Bool _needsTableViewUpdates;
    _Bool _tableViewBeginUpdatesWasCalled;
    _Bool _reloadTableWhenVisible;
    _Bool _refetchAfterAttachmentBrowserDismiss;
    _Bool _setupUIComplete;
    id <ICNoteContainer> _noteContainer;
    ICNoteEditorViewController *_noteEditorViewController;
    UINavigationController *_noteEditorNavigationViewController;
    ICSearchViewController *_searchViewController;
    id <ICNotesListViewControllerDelegate> _delegate;
    NSFetchedResultsController *_fetchedResultsController;
    NSArray *_contentsCache;
    UIBarButtonItem *_attachmentButton;
    UIBarButtonItem *_summaryButton;
    UIBarButtonItem *_addNoteButton;
    UIBarButtonItem *_editButton;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_moveButton;
    UIBarButtonItem *_trashButton;
    UIBarButtonItem *_deleteAllButton;
    UIBarButtonItem *_moveAllButton;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_debugButton;
    NSIndexPath *_selectionPathOfDeletedNote;
    ICListTableView *_tableView;
    UIView *_loadingOverlay;
    ICNotesListSummaryView *_summaryView;
    UIActivityIndicatorView *_summarySpinnerView;
    UILabel *_headerViewLabel;
    NSIndexPath *_tableViewEditingRowIndexPath;
    NSArray *_notesToMoveToFolder;
    double _imageHeight;
    ICNotesListCellHandler *_cellHandler;
    NSMutableSet *_dirtyNotes;
    ICSelectorDelayer *_selectorDelayerForReloadData;
    ICProgressIndicatorTracker *_progressIndicatorTracker;
    unsigned long long _previousSummaryViewNumNotes;
    long long _generalEditModeInTransition;
    long long _folderSelectorHorizontalSizeClass;
    long long _currentSortType;
    id <UIViewControllerPreviewing> _previewer;
    NSDate *_lastAccessibilityAnnouncementDate;
}

- (void).cxx_destruct;
- (_Bool)accessibilityPerformEscape;
- (void)accountsDidChange:(id)arg1;
- (void)addNote:(id)arg1;
- (void)addNote:(id)arg1 startEditing:(_Bool)arg2;
@property(retain, nonatomic) UIBarButtonItem *addNoteButton; // @synthesize addNoteButton=_addNoteButton;
- (void)applyAccessibilityLabels;
@property(retain, nonatomic) UIBarButtonItem *attachmentButton; // @synthesize attachmentButton=_attachmentButton;
- (void)attachmentUpdated:(id)arg1;
- (void)attachmentWasDeleted:(id)arg1;
- (void)authenticateAndMoveNotes:(id)arg1 toNoteContainer:(id)arg2;
@property(nonatomic) _Bool autoScrollToSelectionOnNoteModification; // @synthesize autoScrollToSelectionOnNoteModification=_autoScrollToSelectionOnNoteModification;
@property(nonatomic) _Bool avoidNoteSelectionInViewDidAppear; // @synthesize avoidNoteSelectionInViewDidAppear=_avoidNoteSelectionInViewDidAppear;
- (_Bool)canBecomeFirstResponder;
- (void)cancel:(id)arg1;
@property(retain, nonatomic) UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) ICNotesListCellHandler *cellHandler; // @synthesize cellHandler=_cellHandler;
- (void)closeFolderSelector:(id)arg1;
- (void)closeFolderSelectorIfNeeded:(id)arg1 animated:(_Bool)arg2;
- (void)commitPreviewViewController:(id)arg1 committedViewController:(id)arg2;
- (id)contentScrollView;
- (void)contentSizeCategoryDidChange;
@property(copy, nonatomic) NSArray *contentsCache; // @synthesize contentsCache=_contentsCache;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controllerWillChangeContent:(id)arg1;
- (void)currentNoteDidChange;
@property(nonatomic) long long currentSortType; // @synthesize currentSortType=_currentSortType;
- (void)dealloc;
@property(retain, nonatomic) UIBarButtonItem *debugButton; // @synthesize debugButton=_debugButton;
- (void)delayedReloadData;
@property(nonatomic) __weak id <ICNotesListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIBarButtonItem *deleteAllButton; // @synthesize deleteAllButton=_deleteAllButton;
- (void)deleteAllNotes:(id)arg1;
- (void)deleteNote:(id)arg1 atIndexPath:(id)arg2;
- (void)deleteNoteFromTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)deleteNotesFromTableView:(id)arg1 atIndexPaths:(id)arg2;
- (void)deleteSelectedNotes:(id)arg1;
@property(nonatomic) _Bool didBeginUpdatingFromFetchedResultsController; // @synthesize didBeginUpdatingFromFetchedResultsController=_didBeginUpdatingFromFetchedResultsController;
- (void)didDismissPreviewViewController:(id)arg1 committing:(_Bool)arg2;
- (void)didDismissSearchViewController:(id)arg1;
- (void)didPresentSearchViewController:(id)arg1;
@property(nonatomic) _Bool didReceiveContextRefreshNotification; // @synthesize didReceiveContextRefreshNotification=_didReceiveContextRefreshNotification;
- (void)didReceiveMemoryWarning;
@property(retain, nonatomic) NSMutableSet *dirtyNotes; // @synthesize dirtyNotes=_dirtyNotes;
- (void)dismissSearch;
@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIBarButtonItem *editButton; // @synthesize editButton=_editButton;
- (void)endEditMode:(id)arg1;
- (void)endEditMode:(id)arg1 animated:(_Bool)arg2;
- (void)fetchAndReloadData;
@property(retain, nonatomic) NSFetchedResultsController *fetchedResultsController; // @synthesize fetchedResultsController=_fetchedResultsController;
- (void)folderList:(id)arg1 didSelectNoteCollection:(id)arg2 cellFrame:(struct CGRect)arg3;
- (void)folderList:(id)arg1 didSelectNoteContainer:(id)arg2;
- (void)folderListDidCancel:(id)arg1;
@property(nonatomic) long long folderSelectorHorizontalSizeClass; // @synthesize folderSelectorHorizontalSizeClass=_folderSelectorHorizontalSizeClass;
@property(nonatomic) long long generalEditModeInTransition; // @synthesize generalEditModeInTransition=_generalEditModeInTransition;
@property(retain, nonatomic) UILabel *headerViewLabel; // @synthesize headerViewLabel=_headerViewLabel;
@property(nonatomic) _Bool headerViewLabelIsSingleLine; // @synthesize headerViewLabelIsSingleLine=_headerViewLabelIsSingleLine;
- (double)heightOfHeaderViewNeedTwoLines:(_Bool *)arg1;
- (void)hideSearchBarIfNeededAnimated:(_Bool)arg1;
@property(nonatomic) double imageHeight; // @synthesize imageHeight=_imageHeight;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)isInAttachmentBrowser;
- (_Bool)isInTrashFolder;
@property(nonatomic) _Bool isMovingOrDeletingNotes; // @synthesize isMovingOrDeletingNotes=_isMovingOrDeletingNotes;
- (_Bool)isShowingFolderFromiCloudAccount;
- (_Bool)isVisible;
- (void)keyCommandFindNote:(id)arg1;
- (id)keyCommands;
@property(retain, nonatomic) NSDate *lastAccessibilityAnnouncementDate; // @synthesize lastAccessibilityAnnouncementDate=_lastAccessibilityAnnouncementDate;
@property(retain, nonatomic) UIView *loadingOverlay; // @synthesize loadingOverlay=_loadingOverlay;
@property(retain, nonatomic) UIBarButtonItem *moveAllButton; // @synthesize moveAllButton=_moveAllButton;
- (void)moveAllNotes:(id)arg1;
@property(retain, nonatomic) UIBarButtonItem *moveButton; // @synthesize moveButton=_moveButton;
- (void)moveNotes:(id)arg1 toNoteContainer:(id)arg2;
- (void)moveOrDeleteNotes:(id)arg1 alertTitle:(id)arg2 alertMessage:(id)arg3 progressFormatString:(id)arg4 setupBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6 processNoteBlock:(CDUnknownBlockType)arg7;
- (void)moveSelectedNotes:(id)arg1;
@property(nonatomic) _Bool needsHidingSearchBar; // @synthesize needsHidingSearchBar=_needsHidingSearchBar;
@property(nonatomic) _Bool needsTableViewUpdates; // @synthesize needsTableViewUpdates=_needsTableViewUpdates;
- (id)noteAtIndexPath:(id)arg1;
@property(retain, nonatomic) id <ICNoteContainer> noteContainer; // @synthesize noteContainer=_noteContainer;
- (void)noteContainerWillBeDeletedNotification:(id)arg1;
- (void)noteDecryptedStatusDidChange:(id)arg1;
- (void)noteDidAddOrRemovePassword:(id)arg1;
@property(nonatomic) __weak UINavigationController *noteEditorNavigationViewController; // @synthesize noteEditorNavigationViewController=_noteEditorNavigationViewController;
@property(retain, nonatomic) ICNoteEditorViewController *noteEditorViewController; // @synthesize noteEditorViewController=_noteEditorViewController;
- (void)noteWillAddOrRemovePassword:(id)arg1;
- (void)noteWillBeDeleted:(id)arg1;
@property(readonly, nonatomic) NSArray *notes;
- (void)notesContextRefreshNotification:(id)arg1;
- (_Bool)notesFromArrayContainsUnauthenticatedNote:(id)arg1;
@property(copy, nonatomic) NSArray *notesToMoveToFolder; // @synthesize notesToMoveToFolder=_notesToMoveToFolder;
- (void)prepForAppear:(_Bool)arg1;
- (void)prepareForSuspend;
- (id)previewViewControllerForLocation:(struct CGPoint)arg1 inSourceView:(id)arg2;
@property(retain, nonatomic) id <UIViewControllerPreviewing> previewer; // @synthesize previewer=_previewer;
@property(nonatomic) unsigned long long previousSummaryViewNumNotes; // @synthesize previousSummaryViewNumNotes=_previousSummaryViewNumNotes;
@property(retain, nonatomic) ICProgressIndicatorTracker *progressIndicatorTracker; // @synthesize progressIndicatorTracker=_progressIndicatorTracker;
- (void)progressIndicatorTrackerStartAnimation;
- (void)progressIndicatorTrackerStopAnimation;
- (void)recreateFetchedResultsController;
- (void)recreateFetchedResultsControllerPerformFetch:(_Bool)arg1;
@property(nonatomic) _Bool refetchAfterAttachmentBrowserDismiss; // @synthesize refetchAfterAttachmentBrowserDismiss=_refetchAfterAttachmentBrowserDismiss;
@property(nonatomic) _Bool reloadDataAfterEndUpdates; // @synthesize reloadDataAfterEndUpdates=_reloadDataAfterEndUpdates;
- (void)reloadRowForNote:(id)arg1;
@property(nonatomic) _Bool reloadTableWhenVisible; // @synthesize reloadTableWhenVisible=_reloadTableWhenVisible;
- (void)resumeAfterSuspend;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
@property(retain, nonatomic) ICSearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
- (void)searchViewController:(id)arg1 didDeleteSearchResult:(id)arg2;
- (void)selectTableViewRowNearIndexPath:(id)arg1;
@property(retain, nonatomic) NSIndexPath *selectionPathOfDeletedNote; // @synthesize selectionPathOfDeletedNote=_selectionPathOfDeletedNote;
@property(retain, nonatomic) ICSelectorDelayer *selectorDelayerForReloadData; // @synthesize selectorDelayerForReloadData=_selectorDelayerForReloadData;
- (void)setHeaderViewLabelToDoubleLine;
- (void)setHeaderViewLabelToSingleLine;
- (void)setNewCurrentNoteNotInNotes:(id)arg1;
@property(nonatomic) _Bool setupUIComplete; // @synthesize setupUIComplete=_setupUIComplete;
@property(nonatomic) _Bool showLoadingOverlay; // @synthesize showLoadingOverlay=_showLoadingOverlay;
@property(retain, nonatomic) UIBarButtonItem *summaryButton; // @synthesize summaryButton=_summaryButton;
@property(retain, nonatomic) UIActivityIndicatorView *summarySpinnerView; // @synthesize summarySpinnerView=_summarySpinnerView;
@property(retain, nonatomic) ICNotesListSummaryView *summaryView; // @synthesize summaryView=_summaryView;
@property(retain, nonatomic) ICListTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool tableViewBeginUpdatesWasCalled; // @synthesize tableViewBeginUpdatesWasCalled=_tableViewBeginUpdatesWasCalled;
@property(copy, nonatomic) NSIndexPath *tableViewEditingRowIndexPath; // @synthesize tableViewEditingRowIndexPath=_tableViewEditingRowIndexPath;
@property(retain, nonatomic) UIBarButtonItem *trashButton; // @synthesize trashButton=_trashButton;
@property(nonatomic) _Bool updateSelectionOnInsert; // @synthesize updateSelectionOnInsert=_updateSelectionOnInsert;
@property(nonatomic) _Bool wasDisplayed; // @synthesize wasDisplayed=_wasDisplayed;
- (void)setupHeaderViewLabel:(id)arg1;
- (void)setupUI;
@property(readonly, nonatomic) _Bool shouldAlwaysHaveSelectedNote;
@property(readonly, nonatomic) _Bool shouldAlwaysHaveSelectedNoteWhenNotInEditMode;
- (_Bool)shouldAutorotate;
- (_Bool)shouldShowLoadingOverlay;
- (void)showAttachmentBrowser:(id)arg1;
- (void)showAttachmentBrowserAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showDebugMenu:(id)arg1;
- (void)showFolderSelectorToMoveNotes;
- (void)showNote:(id)arg1;
- (void)showNote:(id)arg1 scrollToAttachment:(id)arg2 animated:(_Bool)arg3;
- (void)showNote:(id)arg1 scrollToRange:(struct _NSRange)arg2;
- (void)showNote:(id)arg1 scrollToRange:(struct _NSRange)arg2 animated:(_Bool)arg3;
- (void)showNote:(id)arg1 startEditing:(_Bool)arg2;
- (void)showUIToMoveNotes:(id)arg1;
- (void)splitViewControllerDidChangeHorizontalSizeClass:(id)arg1;
- (void)startEditMode:(id)arg1;
- (void)summaryBarButtonPressed:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 swipeAccessoryButtonPushedForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForSwipeAccessoryButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableViewIndexPathsForSelectedEditableRows;
- (void)tearDownFetchedResultsController;
- (void)timeFormatChanged:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)undoManager;
- (void)updateAttachmentsForNotes:(id)arg1;
- (void)updateBarButtonsAnimated:(_Bool)arg1;
- (void)updateCurrentNoteEditorNote:(id)arg1;
- (void)updateNavAndBarButtonsAnimated:(_Bool)arg1;
- (void)updateNavigationTitle;
- (void)updateSelectionInTableViewAnimated:(_Bool)arg1;
- (void)updateSelectionInTableViewAnimated:(_Bool)arg1 scrollToSelection:(_Bool)arg2;
- (void)updateSortTypeIfNecessary;
- (void)updateViewsAfterNoteContainerChange;
- (void)viewControllerWillStartEditModeNotification:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willDismissSearchViewController:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (void)willPresentSearchViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

