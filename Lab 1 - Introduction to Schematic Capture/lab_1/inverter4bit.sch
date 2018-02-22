<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan6" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="A_out(3:0)" />
        <signal name="A_in(3:0)" />
        <signal name="A_in(3)" />
        <signal name="A_in(2)" />
        <signal name="A_in(1)" />
        <signal name="A_in(0)" />
        <signal name="A_out(3)" />
        <signal name="A_out(2)" />
        <signal name="A_out(1)" />
        <signal name="A_out(0)" />
        <port polarity="Output" name="A_out(3:0)" />
        <port polarity="Input" name="A_in(3:0)" />
        <blockdef name="inv">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-32" y2="-32" x1="0" />
            <line x2="160" y1="-32" y2="-32" x1="224" />
            <line x2="128" y1="-64" y2="-32" x1="64" />
            <line x2="64" y1="-32" y2="0" x1="128" />
            <line x2="64" y1="0" y2="-64" x1="64" />
            <circle r="16" cx="144" cy="-32" />
        </blockdef>
        <block symbolname="inv" name="XLXI_1">
            <blockpin signalname="A_in(3)" name="I" />
            <blockpin signalname="A_out(3)" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_2">
            <blockpin signalname="A_in(2)" name="I" />
            <blockpin signalname="A_out(2)" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_3">
            <blockpin signalname="A_in(1)" name="I" />
            <blockpin signalname="A_out(1)" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_4">
            <blockpin signalname="A_in(0)" name="I" />
            <blockpin signalname="A_out(0)" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="368" y="416" name="XLXI_1" orien="R0" />
        <instance x="368" y="512" name="XLXI_2" orien="R0" />
        <instance x="368" y="608" name="XLXI_3" orien="R0" />
        <instance x="368" y="704" name="XLXI_4" orien="R0" />
        <branch name="A_out(3:0)">
            <wire x2="752" y1="272" y2="384" x1="752" />
            <wire x2="752" y1="384" y2="480" x1="752" />
            <wire x2="752" y1="480" y2="576" x1="752" />
            <wire x2="752" y1="576" y2="672" x1="752" />
        </branch>
        <branch name="A_in(3:0)">
            <wire x2="208" y1="272" y2="384" x1="208" />
            <wire x2="208" y1="384" y2="480" x1="208" />
            <wire x2="208" y1="480" y2="576" x1="208" />
            <wire x2="208" y1="576" y2="672" x1="208" />
        </branch>
        <bustap x2="304" y1="384" y2="384" x1="208" />
        <branch name="A_in(3)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="336" y="384" type="branch" />
            <wire x2="336" y1="384" y2="384" x1="304" />
            <wire x2="368" y1="384" y2="384" x1="336" />
        </branch>
        <bustap x2="304" y1="480" y2="480" x1="208" />
        <branch name="A_in(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="336" y="480" type="branch" />
            <wire x2="336" y1="480" y2="480" x1="304" />
            <wire x2="368" y1="480" y2="480" x1="336" />
        </branch>
        <bustap x2="304" y1="576" y2="576" x1="208" />
        <branch name="A_in(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="336" y="576" type="branch" />
            <wire x2="336" y1="576" y2="576" x1="304" />
            <wire x2="368" y1="576" y2="576" x1="336" />
        </branch>
        <bustap x2="304" y1="672" y2="672" x1="208" />
        <branch name="A_in(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="336" y="672" type="branch" />
            <wire x2="336" y1="672" y2="672" x1="304" />
            <wire x2="368" y1="672" y2="672" x1="336" />
        </branch>
        <bustap x2="656" y1="384" y2="384" x1="752" />
        <branch name="A_out(3)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="624" y="384" type="branch" />
            <wire x2="624" y1="384" y2="384" x1="592" />
            <wire x2="656" y1="384" y2="384" x1="624" />
        </branch>
        <bustap x2="656" y1="480" y2="480" x1="752" />
        <branch name="A_out(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="624" y="480" type="branch" />
            <wire x2="624" y1="480" y2="480" x1="592" />
            <wire x2="656" y1="480" y2="480" x1="624" />
        </branch>
        <bustap x2="656" y1="576" y2="576" x1="752" />
        <branch name="A_out(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="624" y="576" type="branch" />
            <wire x2="624" y1="576" y2="576" x1="592" />
            <wire x2="656" y1="576" y2="576" x1="624" />
        </branch>
        <bustap x2="656" y1="672" y2="672" x1="752" />
        <branch name="A_out(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="624" y="672" type="branch" />
            <wire x2="624" y1="672" y2="672" x1="592" />
            <wire x2="656" y1="672" y2="672" x1="624" />
        </branch>
        <iomarker fontsize="28" x="752" y="272" name="A_out(3:0)" orien="R270" />
        <iomarker fontsize="28" x="208" y="272" name="A_in(3:0)" orien="R270" />
    </sheet>
</drawing>