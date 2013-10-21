//
//  MyFilesViewController.h
//  MyFiles
//
//  Created by Sean Gray 10.21.2013.
//  Copyright (c) 2013 RVC Student. All rights reserved.
//  Updated October 2013 

#import <UIKit/UIKit.h>

@interface MyFilesViewController : UIViewController
@property (retain, nonatomic) IBOutlet UIView *WebView;
- (IBAction)btnLocal:(id)sender;
- (IBAction)btnWeb:(id)sender;


@end
