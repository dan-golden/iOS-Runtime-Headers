/* Generated by RuntimeBrowser.
 */

@protocol QLScrubViewDataSource

@required

- (int)numberOfPagesInScrubView:(QLScrubView *)arg1;
- (struct CGSize { float x1; float x2; })scrubView:(QLScrubView *)arg1 pageSizeAtIndex:(unsigned int)arg2;
- (QLThumbnailOperation *)scrubView:(QLScrubView *)arg1 thumbnailOperationForPageAtIndex:(unsigned int)arg2;

@end
