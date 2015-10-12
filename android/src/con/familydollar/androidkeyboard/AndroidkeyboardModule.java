/**
 * This file was auto-generated by the Titanium Module SDK helper for Android
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2010 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 *
 */
package con.familydollar.androidkeyboard;

import org.appcelerator.kroll.KrollModule;
import org.appcelerator.kroll.annotations.Kroll;
import org.appcelerator.titanium.TiApplication;
import org.appcelerator.kroll.common.Log;
import org.appcelerator.kroll.common.TiConfig;

import android.content.Context;
import android.text.InputType;
import android.view.inputmethod.InputMethodManager;
import android.widget.EditText;


@Kroll.module(name="Androidkeyboard", id="con.familydollar.androidkeyboard")
public class AndroidkeyboardModule extends KrollModule
{

	// Standard Debugging variables
	private static final String LCAT = "AndroidkeyboardModule";
	private static final boolean DBG = TiConfig.LOGD;

	@Kroll.onAppCreate
	public static void onAppCreate(TiApplication app)
	{
		Log.d(LCAT, "inside onAppCreate");
		// put module init code that needs to run when the application is created
	}
	
	// Force keyboard to display. This is hack to show the end user the keypad.
	@Kroll.method
	public void showKeyboard() {
		Context context = TiApplication.getInstance().getApplicationContext();
		InputMethodManager imm = (InputMethodManager)context.getSystemService(Context.INPUT_METHOD_SERVICE);
		
		// possible solution try
		// Mimic the keybaord type
//		EditText et = new EditText(context);
//		et.setInputType(InputType.TYPE_CLASS_PHONE);
//		InputMethodManager imm = (InputMethodManager)context.getSystemService(Context.INPUT_METHOD_SERVICE);
//		imm.showSoftInput(et,  InputMethodManager.SHOW_FORCED);
		
//		possible solution try
		// This method always return keypad. and this keypad renders Alphanumeric. 
		// Do we have a way to render numeric keypad ? And to hide/close any previously shown keypad ?
		imm.toggleSoftInput(InputMethodManager.SHOW_FORCED, InputMethodManager.HIDE_IMPLICIT_ONLY);
		
		// possible solution try
//			isAcceptingText always return true in either case(shown or not shown keypad case)
//			if (imm.isAcceptingText()) {
//				// Don't set keypad if it already shown.
//			} else {
//				imm.toggleSoftInput(InputMethodManager.SHOW_FORCED, InputMethodManager.HIDE_IMPLICIT_ONLY);
//			}
		
	}

}
