//
//  ViewController.h
//  DayTwentyOne_Camera
//
//  Created by Anuj Katiyal on 03/10/14.
//  Copyright (c) 2014 Katiyals. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

- (IBAction)tappedCamera:(id)sender;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@end

