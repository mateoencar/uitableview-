//
//  OuterSpaceTableViewController.h
//  
//
//  Created by mateo on 1/5/15.
//
//

#import <UIKit/UIKit.h>

@interface OuterSpaceTableViewController : UITableViewController < UITableViewDataSource, UITableViewDelegate >

@property (strong, nonatomic) NSMutableArray *planets; 

@end
