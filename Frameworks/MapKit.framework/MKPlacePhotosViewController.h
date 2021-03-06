/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKPlaceCardPhotosControllerDelegate>, MKMapItem, NSString, _MKPlacePhotosCollectionView;

@interface MKPlacePhotosViewController : UITableViewController <UICollectionViewDataSource, UICollectionViewDelegate, MKStackingViewControllerPreferredSizeUse, MKPlaceAttributionCellProvider> {
    MKMapItem *_mapItem;
    _MKPlacePhotosCollectionView *_photoGrid;
    double _photoWidth;
    <MKPlaceCardPhotosControllerDelegate> *_photosControllerDelegate;
    unsigned long long _photosCount;
    bool_hasAttribution;
    bool_showAddPhotoButton;
    bool_showAttribution;
    bool_showMorePhotosButton;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property bool hasAttribution;
@property(readonly) unsigned long long hash;
@property(retain) MKMapItem * mapItem;
@property(retain) _MKPlacePhotosCollectionView * photoGrid;
@property double photoWidth;
@property <MKPlaceCardPhotosControllerDelegate> * photosControllerDelegate;
@property unsigned long long photosCount;
@property(readonly) bool requiresPreferredContentSizeInStackingView;
@property bool showAddPhotoButton;
@property bool showAttribution;
@property(readonly) bool showAttributionButtons;
@property bool showMorePhotosButton;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addPhoto;
- (void)_calculatePhotoSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_morePhotos;
- (double)_photoCellHeight;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)hasAttribution;
- (id)init;
- (id)mapItem;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)photoGrid;
- (double)photoWidth;
- (id)photos;
- (id)photosControllerDelegate;
- (unsigned long long)photosCount;
- (bool)requiresPreferredContentSizeInStackingView;
- (void)setHasAttribution:(bool)arg1;
- (void)setMapItem:(id)arg1;
- (void)setPhotoGrid:(id)arg1;
- (void)setPhotoWidth:(double)arg1;
- (void)setPhotosControllerDelegate:(id)arg1;
- (void)setPhotosCount:(unsigned long long)arg1;
- (void)setShowAddPhotoButton:(bool)arg1;
- (void)setShowAttribution:(bool)arg1;
- (void)setShowMorePhotosButton:(bool)arg1;
- (bool)showAddPhotoButton;
- (bool)showAttribution;
- (bool)showAttributionButtons;
- (bool)showMorePhotosButton;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
