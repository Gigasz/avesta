



<!DOCTYPE html>
<html>
<head>
 <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" >
 <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" >
 
 <meta name="ROBOTS" content="NOARCHIVE">
 
 <link rel="icon" type="image/vnd.microsoft.icon" href="https://ssl.gstatic.com/codesite/ph/images/phosting.ico">
 
 
 <script type="text/javascript">
 
 
 
 
 var codesite_token = "ABZ6GAdee4qEWvKeWW6k6UM291n-WcfeXw:1406096567923";
 
 
 var CS_env = {"projectName": "avesta74", "projectHomeUrl": "/p/avesta74", "profileUrl": "/u/108692122734644646415/", "token": "ABZ6GAdee4qEWvKeWW6k6UM291n-WcfeXw:1406096567923", "relativeBaseUrl": "", "domainName": null, "assetVersionPath": "https://ssl.gstatic.com/codesite/ph/13997016681179179006", "assetHostPath": "https://ssl.gstatic.com/codesite/ph", "loggedInUserEmail": "jose.guitian@coremain.com"};
 var _gaq = _gaq || [];
 _gaq.push(
 ['siteTracker._setAccount', 'UA-18071-1'],
 ['siteTracker._trackPageview']);
 
 _gaq.push(
 ['projectTracker._setAccount', 'UA-27551938-1'],
 ['projectTracker._trackPageview']);
 
 (function() {
 var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
 ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
 (document.getElementsByTagName('head')[0] || document.getElementsByTagName('body')[0]).appendChild(ga);
 })();
 
 </script>
 
 
 <title>logger.h - 
 avesta74 -
 
 
 A modified Open Tibia Server for the old tibia 7.4 - Google Project Hosting
 </title>
 <link type="text/css" rel="stylesheet" href="https://ssl.gstatic.com/codesite/ph/13997016681179179006/css/core.css">
 
 <link type="text/css" rel="stylesheet" href="https://ssl.gstatic.com/codesite/ph/13997016681179179006/css/ph_detail.css" >
 
 
 <link type="text/css" rel="stylesheet" href="https://ssl.gstatic.com/codesite/ph/13997016681179179006/css/d_sb.css" >
 
 
 
<!--[if IE]>
 <link type="text/css" rel="stylesheet" href="https://ssl.gstatic.com/codesite/ph/13997016681179179006/css/d_ie.css" >
<![endif]-->
 <style type="text/css">
 .menuIcon.off { background: no-repeat url(https://ssl.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -42px }
 .menuIcon.on { background: no-repeat url(https://ssl.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -28px }
 .menuIcon.down { background: no-repeat url(https://ssl.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 0; }
 
 
 
  tr.inline_comment {
 background: #fff;
 vertical-align: top;
 }
 div.draft, div.published {
 padding: .3em;
 border: 1px solid #999; 
 margin-bottom: .1em;
 font-family: arial, sans-serif;
 max-width: 60em;
 }
 div.draft {
 background: #ffa;
 } 
 div.published {
 background: #e5ecf9;
 }
 div.published .body, div.draft .body {
 padding: .5em .1em .1em .1em;
 max-width: 60em;
 white-space: pre-wrap;
 white-space: -moz-pre-wrap;
 white-space: -pre-wrap;
 white-space: -o-pre-wrap;
 word-wrap: break-word;
 font-size: 1em;
 }
 div.draft .actions {
 margin-left: 1em;
 font-size: 90%;
 }
 div.draft form {
 padding: .5em .5em .5em 0;
 }
 div.draft textarea, div.published textarea {
 width: 95%;
 height: 10em;
 font-family: arial, sans-serif;
 margin-bottom: .5em;
 }

 
 .nocursor, .nocursor td, .cursor_hidden, .cursor_hidden td {
 background-color: white;
 height: 2px;
 }
 .cursor, .cursor td {
 background-color: darkblue;
 height: 2px;
 display: '';
 }
 
 
.list {
 border: 1px solid white;
 border-bottom: 0;
}

 
 </style>
</head>
<body class="t4">
<script type="text/javascript">
 window.___gcfg = {lang: 'en'};
 (function() 
 {var po = document.createElement("script");
 po.type = "text/javascript"; po.async = true;po.src = "https://apis.google.com/js/plusone.js";
 var s = document.getElementsByTagName("script")[0];
 s.parentNode.insertBefore(po, s);
 })();
</script>
<div class="headbg">

 <div id="gaia">
 

 <span>
 
 
 
 <a href="#" id="multilogin-dropdown" onclick="return false;"
 ><u><b>jose.guitian@coremain.com</b></u> <small>&#9660;</small></a>
 
 
 | <a href="/u/108692122734644646415/" id="projects-dropdown" onclick="return false;"
 ><u>My favorites</u> <small>&#9660;</small></a>
 | <a href="/u/108692122734644646415/" onclick="_CS_click('/gb/ph/profile');"
 title="Profile, Updates, and Settings"
 ><u>Profile</u></a>
 | <a href="https://www.google.com/accounts/Logout?continue=https%3A%2F%2Fcode.google.com%2Fp%2Favesta74%2Fsource%2Fbrowse%2Ftrunk%2Fsrc%2Flogger.h" 
 onclick="_CS_click('/gb/ph/signout');"
 ><u>Sign out</u></a>
 
 </span>

 </div>

 <div class="gbh" style="left: 0pt;"></div>
 <div class="gbh" style="right: 0pt;"></div>
 
 
 <div style="height: 1px"></div>
<!--[if lte IE 7]>
<div style="text-align:center;">
Your version of Internet Explorer is not supported. Try a browser that
contributes to open source, such as <a href="http://www.firefox.com">Firefox</a>,
<a href="http://www.google.com/chrome">Google Chrome</a>, or
<a href="http://code.google.com/chrome/chromeframe/">Google Chrome Frame</a>.
</div>
<![endif]-->



 <table style="padding:0px; margin: 0px 0px 10px 0px; width:100%" cellpadding="0" cellspacing="0"
 itemscope itemtype="http://schema.org/CreativeWork">
 <tr style="height: 58px;">
 
 
 
 <td id="plogo">
 <link itemprop="url" href="/p/avesta74">
 <a href="/p/avesta74/">
 
 <img src="https://ssl.gstatic.com/codesite/ph/images/defaultlogo.png" alt="Logo" itemprop="image">
 
 </a>
 </td>
 
 <td style="padding-left: 0.5em">
 
 <div id="pname">
 <a href="/p/avesta74/"><span itemprop="name">avesta74</span></a>
 </div>
 
 <div id="psum">
 <a id="project_summary_link"
 href="/p/avesta74/"><span itemprop="description">A modified Open Tibia Server for the old tibia 7.4</span></a>
 
 </div>
 
 
 </td>
 <td style="white-space:nowrap;text-align:right; vertical-align:bottom;">
 
 <form action="/hosting/search">
 <input size="30" name="q" value="" type="text">
 
 <input type="submit" name="projectsearch" value="Search projects" >
 </form>
 
 </tr>
 </table>

</div>

 
<div id="mt" class="gtb"> 
 <a href="/p/avesta74/" class="tab ">Project&nbsp;Home</a>
 
 
 
 
 <a href="/p/avesta74/downloads/list" class="tab ">Downloads</a>
 
 
 
 
 
 <a href="/p/avesta74/w/list" class="tab ">Wiki</a>
 
 
 
 
 
 <a href="/p/avesta74/issues/list"
 class="tab ">Issues</a>
 
 
 
 
 
 <a href="/p/avesta74/source/checkout"
 class="tab active">Source</a>
 
 
 
 
 
 
 
 
 <div class=gtbc></div>
</div>
<table cellspacing="0" cellpadding="0" width="100%" align="center" border="0" class="st">
 <tr>
 
 
 
 
 
 
 <td class="subt">
 <div class="st2">
 <div class="isf">
 
 


 <span class="inst1"><a href="/p/avesta74/source/checkout">Checkout</a></span> &nbsp;
 <span class="inst2"><a href="/p/avesta74/source/browse/">Browse</a></span> &nbsp;
 <span class="inst3"><a href="/p/avesta74/source/list">Changes</a></span> &nbsp;
 
 
 
 
 
 
 
 </form>
 <script type="text/javascript">
 
 function codesearchQuery(form) {
 var query = document.getElementById('q').value;
 if (query) { form.action += '%20' + query; }
 }
 </script>
 </div>
</div>

 </td>
 
 
 
 <td align="right" valign="top" class="bevel-right"></td>
 </tr>
</table>


<script type="text/javascript">
 var cancelBubble = false;
 function _go(url) { document.location = url; }
</script>
<div id="maincol"
 
>

 




<div class="expand">
<div id="colcontrol">
<style type="text/css">
 #file_flipper { white-space: nowrap; padding-right: 2em; }
 #file_flipper.hidden { display: none; }
 #file_flipper .pagelink { color: #0000CC; text-decoration: underline; }
 #file_flipper #visiblefiles { padding-left: 0.5em; padding-right: 0.5em; }
</style>
<table id="nav_and_rev" class="list"
 cellpadding="0" cellspacing="0" width="100%">
 <tr>
 
 <td nowrap="nowrap" class="src_crumbs src_nav" width="33%">
 <strong class="src_nav">Source path:&nbsp;</strong>
 <span id="crumb_root">
 
 <a href="/p/avesta74/source/browse/">svn</a>/&nbsp;</span>
 <span id="crumb_links" class="ifClosed"><a href="/p/avesta74/source/browse/trunk/">trunk</a><span class="sp">/&nbsp;</span><a href="/p/avesta74/source/browse/trunk/src/">src</a><span class="sp">/&nbsp;</span>logger.h</span>
 
 


 </td>
 
 
 <td nowrap="nowrap" width="33%" align="center">
 <a href="/p/avesta74/source/browse/trunk/src/logger.h?edit=1"
 ><img src="https://ssl.gstatic.com/codesite/ph/images/pencil-y14.png"
 class="edit_icon">Edit file</a>
 </td>
 
 
 <td nowrap="nowrap" width="33%" align="right">
 <table cellpadding="0" cellspacing="0" style="font-size: 100%"><tr>
 
 
 <td class="flipper"><b>r102</b></td>
 
 </tr></table>
 </td> 
 </tr>
</table>

<div class="fc">
 
 
 
<style type="text/css">
.undermouse span {
 background-image: url(https://ssl.gstatic.com/codesite/ph/images/comments.gif); }
</style>
<table class="opened" id="review_comment_area"
><tr>
<td id="nums">
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
<pre><table width="100%" id="nums_table_0"><tr id="gr_svn102_1"

><td id="1"><a href="#1">1</a></td></tr
><tr id="gr_svn102_2"

><td id="2"><a href="#2">2</a></td></tr
><tr id="gr_svn102_3"

><td id="3"><a href="#3">3</a></td></tr
><tr id="gr_svn102_4"

><td id="4"><a href="#4">4</a></td></tr
><tr id="gr_svn102_5"

><td id="5"><a href="#5">5</a></td></tr
><tr id="gr_svn102_6"

><td id="6"><a href="#6">6</a></td></tr
><tr id="gr_svn102_7"

><td id="7"><a href="#7">7</a></td></tr
><tr id="gr_svn102_8"

><td id="8"><a href="#8">8</a></td></tr
><tr id="gr_svn102_9"

><td id="9"><a href="#9">9</a></td></tr
><tr id="gr_svn102_10"

><td id="10"><a href="#10">10</a></td></tr
><tr id="gr_svn102_11"

><td id="11"><a href="#11">11</a></td></tr
><tr id="gr_svn102_12"

><td id="12"><a href="#12">12</a></td></tr
><tr id="gr_svn102_13"

><td id="13"><a href="#13">13</a></td></tr
><tr id="gr_svn102_14"

><td id="14"><a href="#14">14</a></td></tr
><tr id="gr_svn102_15"

><td id="15"><a href="#15">15</a></td></tr
><tr id="gr_svn102_16"

><td id="16"><a href="#16">16</a></td></tr
><tr id="gr_svn102_17"

><td id="17"><a href="#17">17</a></td></tr
><tr id="gr_svn102_18"

><td id="18"><a href="#18">18</a></td></tr
><tr id="gr_svn102_19"

><td id="19"><a href="#19">19</a></td></tr
><tr id="gr_svn102_20"

><td id="20"><a href="#20">20</a></td></tr
><tr id="gr_svn102_21"

><td id="21"><a href="#21">21</a></td></tr
><tr id="gr_svn102_22"

><td id="22"><a href="#22">22</a></td></tr
><tr id="gr_svn102_23"

><td id="23"><a href="#23">23</a></td></tr
><tr id="gr_svn102_24"

><td id="24"><a href="#24">24</a></td></tr
><tr id="gr_svn102_25"

><td id="25"><a href="#25">25</a></td></tr
><tr id="gr_svn102_26"

><td id="26"><a href="#26">26</a></td></tr
><tr id="gr_svn102_27"

><td id="27"><a href="#27">27</a></td></tr
><tr id="gr_svn102_28"

><td id="28"><a href="#28">28</a></td></tr
><tr id="gr_svn102_29"

><td id="29"><a href="#29">29</a></td></tr
><tr id="gr_svn102_30"

><td id="30"><a href="#30">30</a></td></tr
><tr id="gr_svn102_31"

><td id="31"><a href="#31">31</a></td></tr
><tr id="gr_svn102_32"

><td id="32"><a href="#32">32</a></td></tr
><tr id="gr_svn102_33"

><td id="33"><a href="#33">33</a></td></tr
><tr id="gr_svn102_34"

><td id="34"><a href="#34">34</a></td></tr
><tr id="gr_svn102_35"

><td id="35"><a href="#35">35</a></td></tr
><tr id="gr_svn102_36"

><td id="36"><a href="#36">36</a></td></tr
><tr id="gr_svn102_37"

><td id="37"><a href="#37">37</a></td></tr
><tr id="gr_svn102_38"

><td id="38"><a href="#38">38</a></td></tr
><tr id="gr_svn102_39"

><td id="39"><a href="#39">39</a></td></tr
><tr id="gr_svn102_40"

><td id="40"><a href="#40">40</a></td></tr
><tr id="gr_svn102_41"

><td id="41"><a href="#41">41</a></td></tr
><tr id="gr_svn102_42"

><td id="42"><a href="#42">42</a></td></tr
><tr id="gr_svn102_43"

><td id="43"><a href="#43">43</a></td></tr
><tr id="gr_svn102_44"

><td id="44"><a href="#44">44</a></td></tr
><tr id="gr_svn102_45"

><td id="45"><a href="#45">45</a></td></tr
><tr id="gr_svn102_46"

><td id="46"><a href="#46">46</a></td></tr
><tr id="gr_svn102_47"

><td id="47"><a href="#47">47</a></td></tr
><tr id="gr_svn102_48"

><td id="48"><a href="#48">48</a></td></tr
><tr id="gr_svn102_49"

><td id="49"><a href="#49">49</a></td></tr
><tr id="gr_svn102_50"

><td id="50"><a href="#50">50</a></td></tr
><tr id="gr_svn102_51"

><td id="51"><a href="#51">51</a></td></tr
><tr id="gr_svn102_52"

><td id="52"><a href="#52">52</a></td></tr
><tr id="gr_svn102_53"

><td id="53"><a href="#53">53</a></td></tr
><tr id="gr_svn102_54"

><td id="54"><a href="#54">54</a></td></tr
><tr id="gr_svn102_55"

><td id="55"><a href="#55">55</a></td></tr
><tr id="gr_svn102_56"

><td id="56"><a href="#56">56</a></td></tr
><tr id="gr_svn102_57"

><td id="57"><a href="#57">57</a></td></tr
><tr id="gr_svn102_58"

><td id="58"><a href="#58">58</a></td></tr
><tr id="gr_svn102_59"

><td id="59"><a href="#59">59</a></td></tr
><tr id="gr_svn102_60"

><td id="60"><a href="#60">60</a></td></tr
><tr id="gr_svn102_61"

><td id="61"><a href="#61">61</a></td></tr
><tr id="gr_svn102_62"

><td id="62"><a href="#62">62</a></td></tr
><tr id="gr_svn102_63"

><td id="63"><a href="#63">63</a></td></tr
><tr id="gr_svn102_64"

><td id="64"><a href="#64">64</a></td></tr
><tr id="gr_svn102_65"

><td id="65"><a href="#65">65</a></td></tr
><tr id="gr_svn102_66"

><td id="66"><a href="#66">66</a></td></tr
><tr id="gr_svn102_67"

><td id="67"><a href="#67">67</a></td></tr
><tr id="gr_svn102_68"

><td id="68"><a href="#68">68</a></td></tr
><tr id="gr_svn102_69"

><td id="69"><a href="#69">69</a></td></tr
></table></pre>
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
</td>
<td id="lines">
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
<pre class="prettyprint "><table id="src_table_0"><tr
id=sl_svn102_1

><td class="source">//////////////////////////////////////////////////////////////////////<br></td></tr
><tr
id=sl_svn102_2

><td class="source">// OpenTibia - an opensource roleplaying game<br></td></tr
><tr
id=sl_svn102_3

><td class="source">//////////////////////////////////////////////////////////////////////<br></td></tr
><tr
id=sl_svn102_4

><td class="source">// Logger class - captures everything that happens on the server<br></td></tr
><tr
id=sl_svn102_5

><td class="source">//////////////////////////////////////////////////////////////////////<br></td></tr
><tr
id=sl_svn102_6

><td class="source">// This program is free software; you can redistribute it and/or<br></td></tr
><tr
id=sl_svn102_7

><td class="source">// modify it under the terms of the GNU General Public License<br></td></tr
><tr
id=sl_svn102_8

><td class="source">// as published by the Free Software Foundation; either version 2<br></td></tr
><tr
id=sl_svn102_9

><td class="source">// of the License, or (at your option) any later version.<br></td></tr
><tr
id=sl_svn102_10

><td class="source">// <br></td></tr
><tr
id=sl_svn102_11

><td class="source">// This program is distributed in the hope that it will be useful,<br></td></tr
><tr
id=sl_svn102_12

><td class="source">// but WITHOUT ANY WARRANTY; without even the implied warranty of<br></td></tr
><tr
id=sl_svn102_13

><td class="source">// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the<br></td></tr
><tr
id=sl_svn102_14

><td class="source">// GNU General Public License for more details.<br></td></tr
><tr
id=sl_svn102_15

><td class="source">//<br></td></tr
><tr
id=sl_svn102_16

><td class="source">// You should have received a copy of the GNU General Public License<br></td></tr
><tr
id=sl_svn102_17

><td class="source">// along with this program; if not, write to the Free Software Foundation,<br></td></tr
><tr
id=sl_svn102_18

><td class="source">// Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.<br></td></tr
><tr
id=sl_svn102_19

><td class="source">//////////////////////////////////////////////////////////////////////<br></td></tr
><tr
id=sl_svn102_20

><td class="source"><br></td></tr
><tr
id=sl_svn102_21

><td class="source"><br></td></tr
><tr
id=sl_svn102_22

><td class="source">#ifndef __OTSERV_LOGGER_H__<br></td></tr
><tr
id=sl_svn102_23

><td class="source">#define __OTSERV_LOGGER_H__<br></td></tr
><tr
id=sl_svn102_24

><td class="source"><br></td></tr
><tr
id=sl_svn102_25

><td class="source">#include &quot;definitions.h&quot;<br></td></tr
><tr
id=sl_svn102_26

><td class="source"><br></td></tr
><tr
id=sl_svn102_27

><td class="source">#ifdef __GNUC__<br></td></tr
><tr
id=sl_svn102_28

><td class="source">#define __OTSERV_PRETTY_FUNCTION__ __PRETTY_FUNCTION__<br></td></tr
><tr
id=sl_svn102_29

><td class="source">#endif<br></td></tr
><tr
id=sl_svn102_30

><td class="source">#ifdef _MSC_VER <br></td></tr
><tr
id=sl_svn102_31

><td class="source">#define __OTSERV_PRETTY_FUNCTION__ __FUNCDNAME__<br></td></tr
><tr
id=sl_svn102_32

><td class="source">#endif<br></td></tr
><tr
id=sl_svn102_33

><td class="source"><br></td></tr
><tr
id=sl_svn102_34

><td class="source">/*<br></td></tr
><tr
id=sl_svn102_35

><td class="source">#define LOG_MESSAGE(channel, type, level, message) \<br></td></tr
><tr
id=sl_svn102_36

><td class="source">	Logger::getInstance()-&gt;logMessage(channel, type, level, message, __OTSERV_PRETTY_FUNCTION__, __LINE__, __FILE__);<br></td></tr
><tr
id=sl_svn102_37

><td class="source">*/<br></td></tr
><tr
id=sl_svn102_38

><td class="source"><br></td></tr
><tr
id=sl_svn102_39

><td class="source">#define LOG_MESSAGE(channel, type, level, message) \<br></td></tr
><tr
id=sl_svn102_40

><td class="source">	Logger::getInstance()-&gt;logMessage(channel, type, level, message, __OTSERV_PRETTY_FUNCTION__);<br></td></tr
><tr
id=sl_svn102_41

><td class="source"><br></td></tr
><tr
id=sl_svn102_42

><td class="source">#include &lt;string&gt;<br></td></tr
><tr
id=sl_svn102_43

><td class="source">#include &lt;map&gt;<br></td></tr
><tr
id=sl_svn102_44

><td class="source"><br></td></tr
><tr
id=sl_svn102_45

><td class="source">enum eLogType {<br></td></tr
><tr
id=sl_svn102_46

><td class="source">	LOGTYPE_EVENT,<br></td></tr
><tr
id=sl_svn102_47

><td class="source">	LOGTYPE_WARNING,<br></td></tr
><tr
id=sl_svn102_48

><td class="source">	LOGTYPE_ERROR,<br></td></tr
><tr
id=sl_svn102_49

><td class="source">};<br></td></tr
><tr
id=sl_svn102_50

><td class="source"><br></td></tr
><tr
id=sl_svn102_51

><td class="source">class Logger {<br></td></tr
><tr
id=sl_svn102_52

><td class="source">public:<br></td></tr
><tr
id=sl_svn102_53

><td class="source">	~Logger();<br></td></tr
><tr
id=sl_svn102_54

><td class="source">	static Logger* getInstance(){<br></td></tr
><tr
id=sl_svn102_55

><td class="source">		static Logger instance;<br></td></tr
><tr
id=sl_svn102_56

><td class="source">		return &amp;instance;<br></td></tr
><tr
id=sl_svn102_57

><td class="source">	}<br></td></tr
><tr
id=sl_svn102_58

><td class="source">	/*void logMessage(std::string channel, eLogType type, int level,<br></td></tr
><tr
id=sl_svn102_59

><td class="source">			std::string message, std::string func,<br></td></tr
><tr
id=sl_svn102_60

><td class="source">			int line, std::string file);<br></td></tr
><tr
id=sl_svn102_61

><td class="source">	*/<br></td></tr
><tr
id=sl_svn102_62

><td class="source">	void logMessage(const char* channel, eLogType type, int level,<br></td></tr
><tr
id=sl_svn102_63

><td class="source">			std::string message, const char* func);<br></td></tr
><tr
id=sl_svn102_64

><td class="source">private:<br></td></tr
><tr
id=sl_svn102_65

><td class="source">	FILE* m_file;<br></td></tr
><tr
id=sl_svn102_66

><td class="source">	Logger();<br></td></tr
><tr
id=sl_svn102_67

><td class="source">};<br></td></tr
><tr
id=sl_svn102_68

><td class="source"><br></td></tr
><tr
id=sl_svn102_69

><td class="source">#endif<br></td></tr
></table></pre>
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
</td>
</tr></table>

 
<script type="text/javascript">
 var lineNumUnderMouse = -1;
 
 function gutterOver(num) {
 gutterOut();
 var newTR = document.getElementById('gr_svn102_' + num);
 if (newTR) {
 newTR.className = 'undermouse';
 }
 lineNumUnderMouse = num;
 }
 function gutterOut() {
 if (lineNumUnderMouse != -1) {
 var oldTR = document.getElementById(
 'gr_svn102_' + lineNumUnderMouse);
 if (oldTR) {
 oldTR.className = '';
 }
 lineNumUnderMouse = -1;
 }
 }
 var numsGenState = {table_base_id: 'nums_table_'};
 var srcGenState = {table_base_id: 'src_table_'};
 var alignerRunning = false;
 var startOver = false;
 function setLineNumberHeights() {
 if (alignerRunning) {
 startOver = true;
 return;
 }
 numsGenState.chunk_id = 0;
 numsGenState.table = document.getElementById('nums_table_0');
 numsGenState.row_num = 0;
 if (!numsGenState.table) {
 return; // Silently exit if no file is present.
 }
 srcGenState.chunk_id = 0;
 srcGenState.table = document.getElementById('src_table_0');
 srcGenState.row_num = 0;
 alignerRunning = true;
 continueToSetLineNumberHeights();
 }
 function rowGenerator(genState) {
 if (genState.row_num < genState.table.rows.length) {
 var currentRow = genState.table.rows[genState.row_num];
 genState.row_num++;
 return currentRow;
 }
 var newTable = document.getElementById(
 genState.table_base_id + (genState.chunk_id + 1));
 if (newTable) {
 genState.chunk_id++;
 genState.row_num = 0;
 genState.table = newTable;
 return genState.table.rows[0];
 }
 return null;
 }
 var MAX_ROWS_PER_PASS = 1000;
 function continueToSetLineNumberHeights() {
 var rowsInThisPass = 0;
 var numRow = 1;
 var srcRow = 1;
 while (numRow && srcRow && rowsInThisPass < MAX_ROWS_PER_PASS) {
 numRow = rowGenerator(numsGenState);
 srcRow = rowGenerator(srcGenState);
 rowsInThisPass++;
 if (numRow && srcRow) {
 if (numRow.offsetHeight != srcRow.offsetHeight) {
 numRow.firstChild.style.height = srcRow.offsetHeight + 'px';
 }
 }
 }
 if (rowsInThisPass >= MAX_ROWS_PER_PASS) {
 setTimeout(continueToSetLineNumberHeights, 10);
 } else {
 alignerRunning = false;
 if (startOver) {
 startOver = false;
 setTimeout(setLineNumberHeights, 500);
 }
 }
 }
 function initLineNumberHeights() {
 // Do 2 complete passes, because there can be races
 // between this code and prettify.
 startOver = true;
 setTimeout(setLineNumberHeights, 250);
 window.onresize = setLineNumberHeights;
 }
 initLineNumberHeights();
</script>

 
 
 <div id="log">
 <div style="text-align:right">
 <a class="ifCollapse" href="#" onclick="_toggleMeta(this); return false">Show details</a>
 <a class="ifExpand" href="#" onclick="_toggleMeta(this); return false">Hide details</a>
 </div>
 <div class="ifExpand">
 
 
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="changelog">
 <p>Change log</p>
 <div>
 <a href="/p/avesta74/source/detail?spec=svn102&amp;r=7">r7</a>
 by RSXQ66
 on Jul 23, 2010
 &nbsp; <a href="/p/avesta74/source/diff?spec=svn102&r=7&amp;format=side&amp;path=/trunk/src/logger.h&amp;old_path=/trunk/src/logger.h&amp;old=">Diff</a>
 </div>
 <pre>[No log message]</pre>
 </div>
 
 
 
 
 
 
 <script type="text/javascript">
 var detail_url = '/p/avesta74/source/detail?r=7&spec=svn102';
 var publish_url = '/p/avesta74/source/detail?r=7&spec=svn102#publish';
 // describe the paths of this revision in javascript.
 var changed_paths = [];
 var changed_urls = [];
 
 changed_paths.push('/trunk/account.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/account.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/actions.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/actions.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/actions.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/actions.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/allocator.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/allocator.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/allocator.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/allocator.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/ban.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/ban.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/ban.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/ban.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/baseevents.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/baseevents.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/baseevents.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/baseevents.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/beds.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/beds.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/beds.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/beds.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/chat.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/chat.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/chat.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/chat.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/combat.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/combat.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/combat.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/combat.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/commands.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/commands.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/commands.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/commands.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/condition.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/condition.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/condition.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/condition.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/config.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/config.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/configmanager.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/configmanager.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/configmanager.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/configmanager.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/connection.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/connection.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/connection.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/connection.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/const74.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/const74.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/container.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/container.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/container.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/container.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/creature.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/creature.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/creature.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/creature.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/creatureevent.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/creatureevent.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/creatureevent.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/creatureevent.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/cylinder.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/cylinder.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/cylinder.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/cylinder.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/database.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/database.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/database.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/database.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/databasemysql.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/databasemysql.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/databasemysql.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/databasemysql.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/databasesqlite.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/databasesqlite.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/databasesqlite.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/databasesqlite.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/definitions.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/definitions.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/depot.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/depot.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/depot.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/depot.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/enums.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/enums.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/exception.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/exception.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/exception.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/exception.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/fileloader.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/fileloader.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/fileloader.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/fileloader.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/game.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/game.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/game.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/game.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/house.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/house.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/house.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/house.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/housetile.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/housetile.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/housetile.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/housetile.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/ioaccount.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/ioaccount.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/ioaccount.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/ioaccount.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/iomap.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/iomap.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/iomapotbm.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/iomapotbm.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/iomapotbm.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/iomapotbm.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/iomapserialize.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/iomapserialize.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/iomapserialize.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/iomapserialize.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/iomapxml.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/iomapxml.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/iomapxml.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/iomapxml.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/ioplayer.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/ioplayer.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/ioplayer.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/ioplayer.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/item.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/item.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/item.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/item.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/itemloader.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/itemloader.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/items.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/items.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/items.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/items.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/logger.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/logger.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/logger.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/logger.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/luascript.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/luascript.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/luascript.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/luascript.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/mailbox.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/mailbox.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/mailbox.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/mailbox.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/map.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/map.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/map.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/map.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/md5.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/md5.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/md5.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/md5.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/monster.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/monster.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/monster.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/monster.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/monsters.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/monsters.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/monsters.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/monsters.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/movement.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/movement.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/movement.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/movement.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/networkmessage.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/networkmessage.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/networkmessage.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/networkmessage.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/npc.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/npc.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/npc.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/npc.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/otpch.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/otpch.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/otpch.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/otpch.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/otserv.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/otserv.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/otsystem.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/otsystem.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/outfit.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/outfit.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/outfit.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/outfit.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/outputmessage.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/outputmessage.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/outputmessage.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/outputmessage.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/party.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/party.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/party.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/party.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/player.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/player.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/player.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/player.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/position.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/position.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/position.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/position.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/protocol.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/protocol.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/protocol.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/protocol.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/protocol74.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/protocol74.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/protocol74.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/protocol74.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/protocollogin.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/protocollogin.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/protocollogin.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/protocollogin.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/raids.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/raids.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/raids.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/raids.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/scheduler.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/scheduler.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/scheduler.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/scheduler.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/scriptmanager.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/scriptmanager.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/scriptmanager.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/scriptmanager.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/server.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/server.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/server.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/server.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/sha1.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/sha1.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/sha1.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/sha1.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/spawn.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/spawn.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/spawn.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/spawn.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/spells.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/spells.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/spells.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/spells.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/account.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/account.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/actions.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/actions.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/actions.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/actions.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/allocator.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/allocator.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/allocator.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/allocator.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/ban.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/ban.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/ban.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/ban.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/baseevents.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/baseevents.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/baseevents.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/baseevents.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/beds.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/beds.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/beds.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/beds.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/chat.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/chat.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/chat.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/chat.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/combat.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/combat.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/combat.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/combat.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/commands.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/commands.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/commands.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/commands.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/condition.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/condition.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/condition.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/condition.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/config.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/config.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/configmanager.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/configmanager.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/configmanager.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/configmanager.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/connection.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/connection.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/connection.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/connection.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/const74.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/const74.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/container.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/container.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/container.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/container.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/creature.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/creature.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/creature.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/creature.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/creatureevent.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/creatureevent.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/creatureevent.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/creatureevent.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/cylinder.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/cylinder.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/cylinder.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/cylinder.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/database.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/database.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/database.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/database.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/databasemysql.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/databasemysql.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/databasemysql.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/databasemysql.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/databasesqlite.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/databasesqlite.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/databasesqlite.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/databasesqlite.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/definitions.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/definitions.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/depot.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/depot.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/depot.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/depot.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/enums.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/enums.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/exception.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/exception.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/exception.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/exception.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/fileloader.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/fileloader.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/fileloader.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/fileloader.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/game.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/game.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/game.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/game.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/house.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/house.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/house.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/house.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/housetile.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/housetile.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/housetile.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/housetile.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/ioaccount.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/ioaccount.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/ioaccount.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/ioaccount.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/iomap.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/iomap.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/iomapotbm.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/iomapotbm.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/iomapotbm.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/iomapotbm.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/iomapserialize.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/iomapserialize.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/iomapserialize.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/iomapserialize.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/iomapxml.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/iomapxml.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/iomapxml.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/iomapxml.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/ioplayer.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/ioplayer.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/ioplayer.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/ioplayer.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/item.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/item.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/item.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/item.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/itemloader.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/itemloader.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/items.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/items.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/items.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/items.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/logger.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/logger.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/logger.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/logger.h?r\x3d7\x26spec\x3dsvn102');
 
 var selected_path = '/trunk/src/logger.h';
 
 
 changed_paths.push('/trunk/src/luascript.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/luascript.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/luascript.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/luascript.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/mailbox.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/mailbox.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/mailbox.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/mailbox.h?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/map.cpp');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/map.cpp?r\x3d7\x26spec\x3dsvn102');
 
 
 changed_paths.push('/trunk/src/map.h');
 changed_urls.push('/p/avesta74/source/browse/trunk/src/map.h?r\x3d7\x26spec\x3dsvn102');
 
 
 function getCurrentPageIndex() {
 for (var i = 0; i < changed_paths.length; i++) {
 if (selected_path == changed_paths[i]) {
 return i;
 }
 }
 }
 function getNextPage() {
 var i = getCurrentPageIndex();
 if (i < changed_paths.length - 1) {
 return changed_urls[i + 1];
 }
 return null;
 }
 function getPreviousPage() {
 var i = getCurrentPageIndex();
 if (i > 0) {
 return changed_urls[i - 1];
 }
 return null;
 }
 function gotoNextPage() {
 var page = getNextPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoPreviousPage() {
 var page = getPreviousPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoDetailPage() {
 window.location = detail_url;
 }
 function gotoPublishPage() {
 window.location = publish_url;
 }
</script>

 
 <style type="text/css">
 #review_nav {
 border-top: 3px solid white;
 padding-top: 6px;
 margin-top: 1em;
 }
 #review_nav td {
 vertical-align: middle;
 }
 #review_nav select {
 margin: .5em 0;
 }
 </style>
 <div id="review_nav">
 <table><tr><td>Go to:&nbsp;</td><td>
 <select name="files_in_rev" onchange="window.location=this.value">
 
 <option value="/p/avesta74/source/browse/trunk/account.h?r=7&amp;spec=svn102"
 
 >/trunk/account.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/actions.cpp?r=7&amp;spec=svn102"
 
 >/trunk/actions.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/actions.h?r=7&amp;spec=svn102"
 
 >/trunk/actions.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/allocator.cpp?r=7&amp;spec=svn102"
 
 >/trunk/allocator.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/allocator.h?r=7&amp;spec=svn102"
 
 >/trunk/allocator.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/ban.cpp?r=7&amp;spec=svn102"
 
 >/trunk/ban.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/ban.h?r=7&amp;spec=svn102"
 
 >/trunk/ban.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/baseevents.cpp?r=7&amp;spec=svn102"
 
 >/trunk/baseevents.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/baseevents.h?r=7&amp;spec=svn102"
 
 >/trunk/baseevents.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/beds.cpp?r=7&amp;spec=svn102"
 
 >/trunk/beds.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/beds.h?r=7&amp;spec=svn102"
 
 >/trunk/beds.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/chat.cpp?r=7&amp;spec=svn102"
 
 >/trunk/chat.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/chat.h?r=7&amp;spec=svn102"
 
 >/trunk/chat.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/combat.cpp?r=7&amp;spec=svn102"
 
 >/trunk/combat.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/combat.h?r=7&amp;spec=svn102"
 
 >/trunk/combat.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/commands.cpp?r=7&amp;spec=svn102"
 
 >/trunk/commands.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/commands.h?r=7&amp;spec=svn102"
 
 >/trunk/commands.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/condition.cpp?r=7&amp;spec=svn102"
 
 >/trunk/condition.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/condition.h?r=7&amp;spec=svn102"
 
 >/trunk/condition.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/config.h?r=7&amp;spec=svn102"
 
 >/trunk/config.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/configmanager.cpp?r=7&amp;spec=svn102"
 
 >/trunk/configmanager.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/configmanager.h?r=7&amp;spec=svn102"
 
 >/trunk/configmanager.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/connection.cpp?r=7&amp;spec=svn102"
 
 >/trunk/connection.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/connection.h?r=7&amp;spec=svn102"
 
 >/trunk/connection.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/const74.h?r=7&amp;spec=svn102"
 
 >/trunk/const74.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/container.cpp?r=7&amp;spec=svn102"
 
 >/trunk/container.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/container.h?r=7&amp;spec=svn102"
 
 >/trunk/container.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/creature.cpp?r=7&amp;spec=svn102"
 
 >/trunk/creature.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/creature.h?r=7&amp;spec=svn102"
 
 >/trunk/creature.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/creatureevent.cpp?r=7&amp;spec=svn102"
 
 >/trunk/creatureevent.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/creatureevent.h?r=7&amp;spec=svn102"
 
 >/trunk/creatureevent.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/cylinder.cpp?r=7&amp;spec=svn102"
 
 >/trunk/cylinder.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/cylinder.h?r=7&amp;spec=svn102"
 
 >/trunk/cylinder.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/database.cpp?r=7&amp;spec=svn102"
 
 >/trunk/database.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/database.h?r=7&amp;spec=svn102"
 
 >/trunk/database.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/databasemysql.cpp?r=7&amp;spec=svn102"
 
 >/trunk/databasemysql.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/databasemysql.h?r=7&amp;spec=svn102"
 
 >/trunk/databasemysql.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/databasesqlite.cpp?r=7&amp;spec=svn102"
 
 >/trunk/databasesqlite.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/databasesqlite.h?r=7&amp;spec=svn102"
 
 >/trunk/databasesqlite.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/definitions.h?r=7&amp;spec=svn102"
 
 >/trunk/definitions.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/depot.cpp?r=7&amp;spec=svn102"
 
 >/trunk/depot.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/depot.h?r=7&amp;spec=svn102"
 
 >/trunk/depot.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/enums.h?r=7&amp;spec=svn102"
 
 >/trunk/enums.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/exception.cpp?r=7&amp;spec=svn102"
 
 >/trunk/exception.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/exception.h?r=7&amp;spec=svn102"
 
 >/trunk/exception.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/fileloader.cpp?r=7&amp;spec=svn102"
 
 >/trunk/fileloader.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/fileloader.h?r=7&amp;spec=svn102"
 
 >/trunk/fileloader.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/game.cpp?r=7&amp;spec=svn102"
 
 >/trunk/game.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/game.h?r=7&amp;spec=svn102"
 
 >/trunk/game.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/house.cpp?r=7&amp;spec=svn102"
 
 >/trunk/house.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/house.h?r=7&amp;spec=svn102"
 
 >/trunk/house.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/housetile.cpp?r=7&amp;spec=svn102"
 
 >/trunk/housetile.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/housetile.h?r=7&amp;spec=svn102"
 
 >/trunk/housetile.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/ioaccount.cpp?r=7&amp;spec=svn102"
 
 >/trunk/ioaccount.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/ioaccount.h?r=7&amp;spec=svn102"
 
 >/trunk/ioaccount.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/iomap.h?r=7&amp;spec=svn102"
 
 >/trunk/iomap.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/iomapotbm.cpp?r=7&amp;spec=svn102"
 
 >/trunk/iomapotbm.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/iomapotbm.h?r=7&amp;spec=svn102"
 
 >/trunk/iomapotbm.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/iomapserialize.cpp?r=7&amp;spec=svn102"
 
 >/trunk/iomapserialize.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/iomapserialize.h?r=7&amp;spec=svn102"
 
 >/trunk/iomapserialize.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/iomapxml.cpp?r=7&amp;spec=svn102"
 
 >/trunk/iomapxml.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/iomapxml.h?r=7&amp;spec=svn102"
 
 >/trunk/iomapxml.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/ioplayer.cpp?r=7&amp;spec=svn102"
 
 >/trunk/ioplayer.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/ioplayer.h?r=7&amp;spec=svn102"
 
 >/trunk/ioplayer.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/item.cpp?r=7&amp;spec=svn102"
 
 >/trunk/item.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/item.h?r=7&amp;spec=svn102"
 
 >/trunk/item.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/itemloader.h?r=7&amp;spec=svn102"
 
 >/trunk/itemloader.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/items.cpp?r=7&amp;spec=svn102"
 
 >/trunk/items.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/items.h?r=7&amp;spec=svn102"
 
 >/trunk/items.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/logger.cpp?r=7&amp;spec=svn102"
 
 >/trunk/logger.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/logger.h?r=7&amp;spec=svn102"
 
 >/trunk/logger.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/luascript.cpp?r=7&amp;spec=svn102"
 
 >/trunk/luascript.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/luascript.h?r=7&amp;spec=svn102"
 
 >/trunk/luascript.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/mailbox.cpp?r=7&amp;spec=svn102"
 
 >/trunk/mailbox.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/mailbox.h?r=7&amp;spec=svn102"
 
 >/trunk/mailbox.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/map.cpp?r=7&amp;spec=svn102"
 
 >/trunk/map.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/map.h?r=7&amp;spec=svn102"
 
 >/trunk/map.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/md5.cpp?r=7&amp;spec=svn102"
 
 >/trunk/md5.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/md5.h?r=7&amp;spec=svn102"
 
 >/trunk/md5.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/monster.cpp?r=7&amp;spec=svn102"
 
 >/trunk/monster.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/monster.h?r=7&amp;spec=svn102"
 
 >/trunk/monster.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/monsters.cpp?r=7&amp;spec=svn102"
 
 >/trunk/monsters.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/monsters.h?r=7&amp;spec=svn102"
 
 >/trunk/monsters.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/movement.cpp?r=7&amp;spec=svn102"
 
 >/trunk/movement.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/movement.h?r=7&amp;spec=svn102"
 
 >/trunk/movement.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/networkmessage.cpp?r=7&amp;spec=svn102"
 
 >/trunk/networkmessage.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/networkmessage.h?r=7&amp;spec=svn102"
 
 >/trunk/networkmessage.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/npc.cpp?r=7&amp;spec=svn102"
 
 >/trunk/npc.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/npc.h?r=7&amp;spec=svn102"
 
 >/trunk/npc.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/otpch.cpp?r=7&amp;spec=svn102"
 
 >/trunk/otpch.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/otpch.h?r=7&amp;spec=svn102"
 
 >/trunk/otpch.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/otserv.cpp?r=7&amp;spec=svn102"
 
 >/trunk/otserv.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/otsystem.h?r=7&amp;spec=svn102"
 
 >/trunk/otsystem.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/outfit.cpp?r=7&amp;spec=svn102"
 
 >/trunk/outfit.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/outfit.h?r=7&amp;spec=svn102"
 
 >/trunk/outfit.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/outputmessage.cpp?r=7&amp;spec=svn102"
 
 >/trunk/outputmessage.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/outputmessage.h?r=7&amp;spec=svn102"
 
 >/trunk/outputmessage.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/party.cpp?r=7&amp;spec=svn102"
 
 >/trunk/party.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/party.h?r=7&amp;spec=svn102"
 
 >/trunk/party.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/player.cpp?r=7&amp;spec=svn102"
 
 >/trunk/player.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/player.h?r=7&amp;spec=svn102"
 
 >/trunk/player.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/position.cpp?r=7&amp;spec=svn102"
 
 >/trunk/position.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/position.h?r=7&amp;spec=svn102"
 
 >/trunk/position.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/protocol.cpp?r=7&amp;spec=svn102"
 
 >/trunk/protocol.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/protocol.h?r=7&amp;spec=svn102"
 
 >/trunk/protocol.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/protocol74.cpp?r=7&amp;spec=svn102"
 
 >/trunk/protocol74.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/protocol74.h?r=7&amp;spec=svn102"
 
 >/trunk/protocol74.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/protocollogin.cpp?r=7&amp;spec=svn102"
 
 >/trunk/protocollogin.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/protocollogin.h?r=7&amp;spec=svn102"
 
 >/trunk/protocollogin.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/raids.cpp?r=7&amp;spec=svn102"
 
 >/trunk/raids.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/raids.h?r=7&amp;spec=svn102"
 
 >/trunk/raids.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/scheduler.cpp?r=7&amp;spec=svn102"
 
 >/trunk/scheduler.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/scheduler.h?r=7&amp;spec=svn102"
 
 >/trunk/scheduler.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/scriptmanager.cpp?r=7&amp;spec=svn102"
 
 >/trunk/scriptmanager.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/scriptmanager.h?r=7&amp;spec=svn102"
 
 >/trunk/scriptmanager.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/server.cpp?r=7&amp;spec=svn102"
 
 >/trunk/server.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/server.h?r=7&amp;spec=svn102"
 
 >/trunk/server.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/sha1.cpp?r=7&amp;spec=svn102"
 
 >/trunk/sha1.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/sha1.h?r=7&amp;spec=svn102"
 
 >/trunk/sha1.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/spawn.cpp?r=7&amp;spec=svn102"
 
 >/trunk/spawn.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/spawn.h?r=7&amp;spec=svn102"
 
 >/trunk/spawn.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/spells.cpp?r=7&amp;spec=svn102"
 
 >/trunk/spells.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/spells.h?r=7&amp;spec=svn102"
 
 >/trunk/spells.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/account.h?r=7&amp;spec=svn102"
 
 >/trunk/src/account.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/actions.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/actions.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/actions.h?r=7&amp;spec=svn102"
 
 >/trunk/src/actions.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/allocator.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/allocator.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/allocator.h?r=7&amp;spec=svn102"
 
 >/trunk/src/allocator.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/ban.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/ban.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/ban.h?r=7&amp;spec=svn102"
 
 >/trunk/src/ban.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/baseevents.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/baseevents.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/baseevents.h?r=7&amp;spec=svn102"
 
 >/trunk/src/baseevents.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/beds.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/beds.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/beds.h?r=7&amp;spec=svn102"
 
 >/trunk/src/beds.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/chat.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/chat.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/chat.h?r=7&amp;spec=svn102"
 
 >/trunk/src/chat.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/combat.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/combat.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/combat.h?r=7&amp;spec=svn102"
 
 >/trunk/src/combat.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/commands.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/commands.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/commands.h?r=7&amp;spec=svn102"
 
 >/trunk/src/commands.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/condition.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/condition.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/condition.h?r=7&amp;spec=svn102"
 
 >/trunk/src/condition.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/config.h?r=7&amp;spec=svn102"
 
 >/trunk/src/config.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/configmanager.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/configmanager.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/configmanager.h?r=7&amp;spec=svn102"
 
 >/trunk/src/configmanager.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/connection.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/connection.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/connection.h?r=7&amp;spec=svn102"
 
 >/trunk/src/connection.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/const74.h?r=7&amp;spec=svn102"
 
 >/trunk/src/const74.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/container.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/container.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/container.h?r=7&amp;spec=svn102"
 
 >/trunk/src/container.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/creature.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/creature.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/creature.h?r=7&amp;spec=svn102"
 
 >/trunk/src/creature.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/creatureevent.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/creatureevent.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/creatureevent.h?r=7&amp;spec=svn102"
 
 >/trunk/src/creatureevent.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/cylinder.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/cylinder.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/cylinder.h?r=7&amp;spec=svn102"
 
 >/trunk/src/cylinder.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/database.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/database.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/database.h?r=7&amp;spec=svn102"
 
 >/trunk/src/database.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/databasemysql.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/databasemysql.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/databasemysql.h?r=7&amp;spec=svn102"
 
 >/trunk/src/databasemysql.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/databasesqlite.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/databasesqlite.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/databasesqlite.h?r=7&amp;spec=svn102"
 
 >/trunk/src/databasesqlite.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/definitions.h?r=7&amp;spec=svn102"
 
 >/trunk/src/definitions.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/depot.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/depot.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/depot.h?r=7&amp;spec=svn102"
 
 >/trunk/src/depot.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/enums.h?r=7&amp;spec=svn102"
 
 >/trunk/src/enums.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/exception.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/exception.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/exception.h?r=7&amp;spec=svn102"
 
 >/trunk/src/exception.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/fileloader.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/fileloader.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/fileloader.h?r=7&amp;spec=svn102"
 
 >/trunk/src/fileloader.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/game.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/game.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/game.h?r=7&amp;spec=svn102"
 
 >/trunk/src/game.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/house.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/house.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/house.h?r=7&amp;spec=svn102"
 
 >/trunk/src/house.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/housetile.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/housetile.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/housetile.h?r=7&amp;spec=svn102"
 
 >/trunk/src/housetile.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/ioaccount.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/ioaccount.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/ioaccount.h?r=7&amp;spec=svn102"
 
 >/trunk/src/ioaccount.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/iomap.h?r=7&amp;spec=svn102"
 
 >/trunk/src/iomap.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/iomapotbm.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/iomapotbm.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/iomapotbm.h?r=7&amp;spec=svn102"
 
 >/trunk/src/iomapotbm.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/iomapserialize.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/iomapserialize.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/iomapserialize.h?r=7&amp;spec=svn102"
 
 >/trunk/src/iomapserialize.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/iomapxml.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/iomapxml.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/iomapxml.h?r=7&amp;spec=svn102"
 
 >/trunk/src/iomapxml.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/ioplayer.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/ioplayer.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/ioplayer.h?r=7&amp;spec=svn102"
 
 >/trunk/src/ioplayer.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/item.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/item.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/item.h?r=7&amp;spec=svn102"
 
 >/trunk/src/item.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/itemloader.h?r=7&amp;spec=svn102"
 
 >/trunk/src/itemloader.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/items.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/items.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/items.h?r=7&amp;spec=svn102"
 
 >/trunk/src/items.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/logger.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/logger.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/logger.h?r=7&amp;spec=svn102"
 selected="selected"
 >/trunk/src/logger.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/luascript.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/luascript.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/luascript.h?r=7&amp;spec=svn102"
 
 >/trunk/src/luascript.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/mailbox.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/mailbox.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/mailbox.h?r=7&amp;spec=svn102"
 
 >/trunk/src/mailbox.h</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/map.cpp?r=7&amp;spec=svn102"
 
 >/trunk/src/map.cpp</option>
 
 <option value="/p/avesta74/source/browse/trunk/src/map.h?r=7&amp;spec=svn102"
 
 >/trunk/src/map.h</option>
 
 </select>
 </td></tr></table>
 
 
 



 
 </div>
 
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="older_bubble">
 <p>Older revisions</p>
 
 <a href="/p/avesta74/source/list?path=/trunk/src/logger.h&start=7">All revisions of this file</a>
 </div>
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="fileinfo_bubble">
 <p>File info</p>
 
 <div>Size: 2257 bytes,
 69 lines</div>
 
 <div><a href="//avesta74.googlecode.com/svn/trunk/src/logger.h">View raw file</a></div>
 </div>
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 </div>
 </div>


</div>

</div>
</div>

<script src="https://ssl.gstatic.com/codesite/ph/13997016681179179006/js/prettify/prettify.js"></script>
<script type="text/javascript">prettyPrint();</script>


<script src="https://ssl.gstatic.com/codesite/ph/13997016681179179006/js/source_file_scripts.js"></script>

 <script type="text/javascript" src="https://ssl.gstatic.com/codesite/ph/13997016681179179006/js/kibbles.js"></script>
 <script type="text/javascript">
 var lastStop = null;
 var initialized = false;
 
 function updateCursor(next, prev) {
 if (prev && prev.element) {
 prev.element.className = 'cursor_stop cursor_hidden';
 }
 if (next && next.element) {
 next.element.className = 'cursor_stop cursor';
 lastStop = next.index;
 }
 }
 
 function pubRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initialized) {
 reloadCursors();
 }
 }
 
 function draftRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initialized) {
 reloadCursors();
 }
 }
 
 function draftDestroyed(data) {
 updateCursorForCell(data.cellId, 'nocursor');
 if (initialized) {
 reloadCursors();
 }
 }
 function reloadCursors() {
 kibbles.skipper.reset();
 loadCursors();
 if (lastStop != null) {
 kibbles.skipper.setCurrentStop(lastStop);
 }
 }
 // possibly the simplest way to insert any newly added comments
 // is to update the class of the corresponding cursor row,
 // then refresh the entire list of rows.
 function updateCursorForCell(cellId, className) {
 var cell = document.getElementById(cellId);
 // we have to go two rows back to find the cursor location
 var row = getPreviousElement(cell.parentNode);
 row.className = className;
 }
 // returns the previous element, ignores text nodes.
 function getPreviousElement(e) {
 var element = e.previousSibling;
 if (element.nodeType == 3) {
 element = element.previousSibling;
 }
 if (element && element.tagName) {
 return element;
 }
 }
 function loadCursors() {
 // register our elements with skipper
 var elements = CR_getElements('*', 'cursor_stop');
 var len = elements.length;
 for (var i = 0; i < len; i++) {
 var element = elements[i]; 
 element.className = 'cursor_stop cursor_hidden';
 kibbles.skipper.append(element);
 }
 }
 function toggleComments() {
 CR_toggleCommentDisplay();
 reloadCursors();
 }
 function keysOnLoadHandler() {
 // setup skipper
 kibbles.skipper.addStopListener(
 kibbles.skipper.LISTENER_TYPE.PRE, updateCursor);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_top', 50);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_bottom', 100);
 // Register our keys
 kibbles.skipper.addFwdKey("n");
 kibbles.skipper.addRevKey("p");
 kibbles.keys.addKeyPressListener(
 'u', function() { window.location = detail_url; });
 kibbles.keys.addKeyPressListener(
 'r', function() { window.location = detail_url + '#publish'; });
 
 kibbles.keys.addKeyPressListener('j', gotoNextPage);
 kibbles.keys.addKeyPressListener('k', gotoPreviousPage);
 
 
 }
 </script>
<script src="https://ssl.gstatic.com/codesite/ph/13997016681179179006/js/code_review_scripts.js"></script>
<script type="text/javascript">
 function showPublishInstructions() {
 var element = document.getElementById('review_instr');
 if (element) {
 element.className = 'opened';
 }
 }
 var codereviews;
 function revsOnLoadHandler() {
 // register our source container with the commenting code
 var paths = {'svn102': '/trunk/src/logger.h'}
 codereviews = CR_controller.setup(
 {"projectName": "avesta74", "projectHomeUrl": "/p/avesta74", "profileUrl": "/u/108692122734644646415/", "token": "ABZ6GAdee4qEWvKeWW6k6UM291n-WcfeXw:1406096567923", "relativeBaseUrl": "", "domainName": null, "assetVersionPath": "https://ssl.gstatic.com/codesite/ph/13997016681179179006", "assetHostPath": "https://ssl.gstatic.com/codesite/ph", "loggedInUserEmail": "jose.guitian@coremain.com"}, '', 'svn102', paths,
 CR_BrowseIntegrationFactory);
 
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_DRAFT_PLATE, showPublishInstructions);
 
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_PUB_PLATE, pubRevealed);
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_DRAFT_PLATE, draftRevealed);
 codereviews.registerActivityListener(CR_ActivityType.DISCARD_DRAFT_COMMENT, draftDestroyed);
 
 
 
 
 
 
 
 var initialized = true;
 reloadCursors();
 }
 window.onload = function() {keysOnLoadHandler(); revsOnLoadHandler();};

</script>
<script type="text/javascript" src="https://ssl.gstatic.com/codesite/ph/13997016681179179006/js/dit_scripts.js"></script>

 
 
 
 <script type="text/javascript" src="https://ssl.gstatic.com/codesite/ph/13997016681179179006/js/ph_core.js"></script>
 
 
 
 
</div> 

<div id="footer" dir="ltr">
 <div class="text">
 <a href="/projecthosting/terms.html">Terms</a> -
 <a href="http://www.google.com/privacy.html">Privacy</a> -
 <a href="/p/support/">Project Hosting Help</a>
 </div>
</div>
 <div class="hostedBy" style="margin-top: -20px;">
 <span style="vertical-align: top;">Powered by <a href="http://code.google.com/projecthosting/">Google Project Hosting</a></span>
 </div>

 
 


 
 </body>
</html>

