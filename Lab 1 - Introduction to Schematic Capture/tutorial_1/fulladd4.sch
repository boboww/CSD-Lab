<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan6" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="XLXN_19" />
        <signal name="XLXN_17" />
        <signal name="XLXN_18" />
        <signal name="B_in(3:0)" />
        <signal name="A_in(3:0)" />
        <signal name="A_in(3)" />
        <signal name="A_in(2)" />
        <signal name="A_in(1)" />
        <signal name="A_in(0)" />
        <signal name="B_in(3)" />
        <signal name="C_in" />
        <signal name="C_out" />
        <signal name="S_out(3:0)" />
        <signal name="B_in(2)" />
        <signal name="B_in(1)" />
        <signal name="B_in(0)" />
        <signal name="S_out(0)" />
        <signal name="S_out(3)" />
        <signal name="S_out(2)" />
        <signal name="S_out(1)" />
        <port polarity="Input" name="B_in(3:0)" />
        <port polarity="Input" name="A_in(3:0)" />
        <port polarity="Input" name="C_in" />
        <port polarity="Output" name="C_out" />
        <port polarity="Output" name="S_out(3:0)" />
        <blockdef name="fulladd">
            <timestamp>2018-1-17T23:8:22</timestamp>
            <rect width="256" x="64" y="-192" height="192" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <block symbolname="fulladd" name="XLXI_6">
            <blockpin signalname="B_in(0)" name="B_in" />
            <blockpin signalname="A_in(0)" name="A_in" />
            <blockpin signalname="C_in" name="C_in" />
            <blockpin signalname="S_out(0)" name="S_out" />
            <blockpin signalname="XLXN_19" name="C_out" />
        </block>
        <block symbolname="fulladd" name="XLXI_7">
            <blockpin signalname="B_in(1)" name="B_in" />
            <blockpin signalname="A_in(1)" name="A_in" />
            <blockpin signalname="XLXN_19" name="C_in" />
            <blockpin signalname="S_out(1)" name="S_out" />
            <blockpin signalname="XLXN_18" name="C_out" />
        </block>
        <block symbolname="fulladd" name="XLXI_9">
            <blockpin signalname="B_in(3)" name="B_in" />
            <blockpin signalname="A_in(3)" name="A_in" />
            <blockpin signalname="XLXN_17" name="C_in" />
            <blockpin signalname="S_out(3)" name="S_out" />
            <blockpin signalname="C_out" name="C_out" />
        </block>
        <block symbolname="fulladd" name="XLXI_8">
            <blockpin signalname="B_in(2)" name="B_in" />
            <blockpin signalname="A_in(2)" name="A_in" />
            <blockpin signalname="XLXN_18" name="C_in" />
            <blockpin signalname="S_out(2)" name="S_out" />
            <blockpin signalname="XLXN_17" name="C_out" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1040" y="640" name="XLXI_6" orien="R0">
        </instance>
        <instance x="1040" y="912" name="XLXI_7" orien="R0">
        </instance>
        <branch name="XLXN_19">
            <wire x2="976" y1="656" y2="880" x1="976" />
            <wire x2="1040" y1="880" y2="880" x1="976" />
            <wire x2="1504" y1="656" y2="656" x1="976" />
            <wire x2="1504" y1="608" y2="608" x1="1424" />
            <wire x2="1504" y1="608" y2="656" x1="1504" />
        </branch>
        <instance x="1040" y="1504" name="XLXI_9" orien="R0">
        </instance>
        <branch name="XLXN_17">
            <wire x2="1024" y1="1248" y2="1472" x1="1024" />
            <wire x2="1040" y1="1472" y2="1472" x1="1024" />
            <wire x2="1472" y1="1248" y2="1248" x1="1024" />
            <wire x2="1472" y1="1168" y2="1168" x1="1424" />
            <wire x2="1472" y1="1168" y2="1248" x1="1472" />
        </branch>
        <instance x="1040" y="1200" name="XLXI_8" orien="R0">
        </instance>
        <branch name="XLXN_18">
            <wire x2="1440" y1="944" y2="944" x1="976" />
            <wire x2="976" y1="944" y2="1168" x1="976" />
            <wire x2="1040" y1="1168" y2="1168" x1="976" />
            <wire x2="1440" y1="880" y2="880" x1="1424" />
            <wire x2="1440" y1="880" y2="944" x1="1440" />
        </branch>
        <branch name="B_in(3:0)">
            <wire x2="704" y1="400" y2="480" x1="704" />
            <wire x2="704" y1="480" y2="752" x1="704" />
            <wire x2="704" y1="752" y2="1040" x1="704" />
            <wire x2="704" y1="1040" y2="1344" x1="704" />
        </branch>
        <branch name="A_in(3:0)">
            <wire x2="496" y1="400" y2="544" x1="496" />
            <wire x2="496" y1="544" y2="816" x1="496" />
            <wire x2="496" y1="816" y2="1104" x1="496" />
            <wire x2="496" y1="1104" y2="1408" x1="496" />
        </branch>
        <bustap x2="592" y1="1408" y2="1408" x1="496" />
        <branch name="A_in(3)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="816" y="1408" type="branch" />
            <wire x2="816" y1="1408" y2="1408" x1="592" />
            <wire x2="1040" y1="1408" y2="1408" x1="816" />
        </branch>
        <bustap x2="592" y1="1104" y2="1104" x1="496" />
        <branch name="A_in(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="816" y="1104" type="branch" />
            <wire x2="816" y1="1104" y2="1104" x1="592" />
            <wire x2="1040" y1="1104" y2="1104" x1="816" />
        </branch>
        <bustap x2="592" y1="816" y2="816" x1="496" />
        <branch name="A_in(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="816" y="816" type="branch" />
            <wire x2="816" y1="816" y2="816" x1="592" />
            <wire x2="1040" y1="816" y2="816" x1="816" />
        </branch>
        <bustap x2="592" y1="544" y2="544" x1="496" />
        <branch name="A_in(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="816" y="544" type="branch" />
            <wire x2="816" y1="544" y2="544" x1="592" />
            <wire x2="1040" y1="544" y2="544" x1="816" />
        </branch>
        <bustap x2="800" y1="1344" y2="1344" x1="704" />
        <branch name="B_in(3)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="920" y="1344" type="branch" />
            <wire x2="928" y1="1344" y2="1344" x1="800" />
            <wire x2="1040" y1="1344" y2="1344" x1="928" />
        </branch>
        <branch name="C_in">
            <wire x2="1040" y1="608" y2="608" x1="1008" />
        </branch>
        <iomarker fontsize="28" x="496" y="400" name="A_in(3:0)" orien="R270" />
        <iomarker fontsize="28" x="704" y="400" name="B_in(3:0)" orien="R270" />
        <iomarker fontsize="28" x="1008" y="608" name="C_in" orien="R180" />
        <branch name="C_out">
            <wire x2="1456" y1="1472" y2="1472" x1="1424" />
        </branch>
        <iomarker fontsize="28" x="1456" y="1472" name="C_out" orien="R0" />
        <branch name="S_out(3:0)">
            <wire x2="1728" y1="368" y2="480" x1="1728" />
            <wire x2="1728" y1="480" y2="752" x1="1728" />
            <wire x2="1728" y1="752" y2="1040" x1="1728" />
            <wire x2="1728" y1="1040" y2="1344" x1="1728" />
        </branch>
        <bustap x2="800" y1="1040" y2="1040" x1="704" />
        <branch name="B_in(2)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="920" y="1040" type="branch" />
            <wire x2="928" y1="1040" y2="1040" x1="800" />
            <wire x2="1040" y1="1040" y2="1040" x1="928" />
        </branch>
        <bustap x2="800" y1="752" y2="752" x1="704" />
        <branch name="B_in(1)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="920" y="752" type="branch" />
            <wire x2="928" y1="752" y2="752" x1="800" />
            <wire x2="1040" y1="752" y2="752" x1="928" />
        </branch>
        <bustap x2="800" y1="480" y2="480" x1="704" />
        <branch name="B_in(0)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="920" y="480" type="branch" />
            <wire x2="928" y1="480" y2="480" x1="800" />
            <wire x2="1040" y1="480" y2="480" x1="928" />
        </branch>
        <bustap x2="1632" y1="480" y2="480" x1="1728" />
        <branch name="S_out(0)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="1528" y="480" type="branch" />
            <wire x2="1536" y1="480" y2="480" x1="1424" />
            <wire x2="1632" y1="480" y2="480" x1="1536" />
        </branch>
        <iomarker fontsize="28" x="1728" y="368" name="S_out(3:0)" orien="R270" />
        <bustap x2="1632" y1="1344" y2="1344" x1="1728" />
        <branch name="S_out(3)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="1528" y="1344" type="branch" />
            <wire x2="1536" y1="1344" y2="1344" x1="1424" />
            <wire x2="1632" y1="1344" y2="1344" x1="1536" />
        </branch>
        <bustap x2="1632" y1="1040" y2="1040" x1="1728" />
        <branch name="S_out(2)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="1528" y="1040" type="branch" />
            <wire x2="1536" y1="1040" y2="1040" x1="1424" />
            <wire x2="1632" y1="1040" y2="1040" x1="1536" />
        </branch>
        <bustap x2="1632" y1="752" y2="752" x1="1728" />
        <branch name="S_out(1)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="1528" y="752" type="branch" />
            <wire x2="1536" y1="752" y2="752" x1="1424" />
            <wire x2="1632" y1="752" y2="752" x1="1536" />
        </branch>
    </sheet>
</drawing>