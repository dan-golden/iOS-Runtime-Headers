/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage, GKGameRecord, GKPlayer, NSArray, GKAchievementCompareHeaderSection, GKAchievementCompareViewSection;

@interface GKAchievementCompareViewControllerPrivate : GKAchievementViewControllerPrivate  {
    GKPlayer *_friend;
    UIImage *_compositeCheckMark;
    GKGameRecord *_friendRecord;
    NSArray *_friendAchievements;
    GKAchievementCompareViewSection *_achievementCompareViewSection;
    GKAchievementCompareHeaderSection *_achievementCompareMeHeaderViewSection;
    GKAchievementCompareHeaderSection *_achievementCompareFriendHeaderViewSection;
}

@property(retain) GKGameRecord * friendRecord;
@property(retain) NSArray * friendAchievements;
@property(retain) UIImage * compositeCheckMark;
@property(retain) GKAchievementCompareViewSection * achievementCompareViewSection;
@property(retain) GKAchievementCompareHeaderSection * achievementCompareMeHeaderViewSection;
@property(retain) GKAchievementCompareHeaderSection * achievementCompareFriendHeaderViewSection;


- (void)setCompositeCheckMark:(id)arg1;
- (void)setFriendAchievements:(id)arg1;
- (void)updateStatusWithError:(id)arg1;
- (id)compositeCheckMark;
- (id)initWithGameRecord:(id)arg1 friendRecord:(id)arg2;
- (id)friendRecord;
- (void)setupSectionDataSource:(id)arg1;
- (id)friendAchievements;
- (id)achievementCompareFriendHeaderViewSection;
- (id)achievementCompareMeHeaderViewSection;
- (id)achievementCompareViewSection;
- (void)setFriendRecord:(id)arg1;
- (void)setAchievementCompareFriendHeaderViewSection:(id)arg1;
- (void)setAchievementCompareMeHeaderViewSection:(id)arg1;
- (void)setAchievementCompareViewSection:(id)arg1;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id)arg1;
- (BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkResetContents;
- (void)playTapped;
- (void)dealloc;
- (void)viewDidLoad;
- (id)title;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;

@end