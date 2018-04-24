<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">

<head>
    <title>扫描二维码</title>
    <meta http-equiv="Content-Type" content="text/html; charset=<?php echo $GLOBALS['cfg_soft_lang']; ?>" />
</head>

<body>
    <a href="<?php echo $GLOBALS['cfg_basehost']; ?>" target="_blank">
		<img src="<?php echo $GLOBALS['cfg_plus_dir']; ?>/qrcode.php?action=get_qrcode&type=<?php echo $GLOBALS['_vars']['type']; ?>&id=<?php echo $GLOBALS['_vars']['id']; ?>" width="300px" height="300px" border="0" alt="">
	</a>
</body>

</html>