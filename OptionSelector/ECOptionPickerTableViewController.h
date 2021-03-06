//
//  ECOptionPickerTableViewController.h
//  OptionSelector
//
//  Created by Elber Carneiro on 8/10/15.
//  Copyright (c) 2015 Mike Kavouras. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ECOptionPickerTableViewControllerDelegate.h"

@interface ECOptionPickerTableViewController : UITableViewController
@property (nonatomic, weak) id<ECOptionPickerTableViewControllerDelegate> delegate;
@property (nonatomic) NSUInteger categoryIndex;
@end
