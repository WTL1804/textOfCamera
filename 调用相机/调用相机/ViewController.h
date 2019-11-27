//
//  ViewController.h
//  调用相机
//
//  Created by 王天亮 on 2019/11/25.
//  Copyright © 2019 王天亮. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
@property (nonatomic, strong) UIImagePickerController *imagePicker;
@property (nonatomic, strong) UIImageView *imageView;
@end

