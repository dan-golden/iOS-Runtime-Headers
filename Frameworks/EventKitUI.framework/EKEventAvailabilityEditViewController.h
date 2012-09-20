/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSMutableArray, UITableView;

@interface EKEventAvailabilityEditViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate> {
    int _availability;
    unsigned int _supportedAvailabilities;
    NSMutableArray *_choices;
    UITableView *_table;
}

@property int availability;
@property unsigned int supportedAvailabilities;


- (void)dealloc;
- (void)viewDidUnload;
- (void)loadView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (unsigned int)supportedAvailabilities;
- (void)setSupportedAvailabilities:(unsigned int)arg1;
- (void)_selectRow:(int)arg1;
- (int)availability;
- (void)setAvailability:(int)arg1;

@end