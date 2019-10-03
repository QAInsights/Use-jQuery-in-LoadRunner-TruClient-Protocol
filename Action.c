//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to 'www.google.com'", "snapshot=Action_1.inf");
	truclient_step("2", "Call Function jQuery.jQueryFunctions", "snapshot=Action_2.inf");
	truclient_step("3", "Evaluate JavaScript code $('input[name='q']').val...le Search Button", "snapshot=Action_3.inf");

	return 0;
}
