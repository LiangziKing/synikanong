<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!doctype html>
<html lang="zh" class="no-js">
<head>
<meta charset="UTF-8">
<meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<meta id="viewport" name="viewport" content="width=320; initial-scale=1.0;maximum-scale=1.0; user-scalable=no;"/>
<title>农药防伪溯源系统</title>
<link rel="stylesheet" type="text/css" href="<?php echo $GLOBALS['cfg_basehost']; ?>/assets/css/normalize.css" />
<link rel="stylesheet" type="text/css" href="<?php echo $GLOBALS['cfg_basehost']; ?>/assets/css/default.css">
<link rel="stylesheet" type="text/css" href="<?php echo $GLOBALS['cfg_basehost']; ?>/assets/css/set2.css?ver=1.0.2" />
 <link rel="stylesheet" type="text/css" href="https://maxcdn.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css">


<script src="<?php echo $GLOBALS['cfg_basehost']; ?>js/jquery.js"></script>
<script src="<?php echo $GLOBALS['cfg_basehost']; ?>mobile.js"></script>
<script src="<?php echo $GLOBALS['cfg_basehost']; ?>jquery-migrate-1.1.0.min.js"></script>
<script src="<?php echo $GLOBALS['cfg_basehost']; ?>js/pintuer.js"></script>
<script src="<?php echo $GLOBALS['cfg_basehost']; ?>js/respond.js"></script>
<script src="<?php echo $GLOBALS['cfg_basehost']; ?>js/jquery.masonry.js"></script>
<script src="<?php echo $GLOBALS['cfg_basehost']; ?>js/sdcms.js"></script>
<style type="text/css">
.layer, .shade { height: 100%; position: fixed; top: 0; width: 100%; }
.shade { background: #000000; opacity: 0.3; }
.layer table { margin: auto; width: 80%; margin-top: 100px; }
.fix_box { width: 100%; position: fixed; bottom: 0; z-index: 3; }
.fix_box ul { margin: 0; padding: 0; display: -webkit-box; display: -moz-box; display: -o-box; display: box; background: #4ebc57; width: 100%; }
.fix_box ul li { list-style: none; -moz-box-flex: 1; -webkit-box-flex: 1; box-flex: 1; }
.fix_box ul li a { color: #ffffff; display: block; padding: 15px 5px; text-align: center; outline: medium none; text-decoration: none; font-size: 12px; }
</style>
</head>
<body>