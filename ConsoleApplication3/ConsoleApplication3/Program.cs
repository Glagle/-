uusing System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;
using System .Diagnostics ;

namespace WindowsApplication273
{
    public partial class Form1 : Form
    {
        PerformanceCounter PC = new PerformanceCounter("System", "System Up Time");
        public Form1()
        {
            InitializeComponent();

            Timer T = new Timer();
            T.Interval = 1000;
            T.Tick += new EventHandler(T_Tick);
            T.Enabled = true;
        }

        void T_Tick(object sender, EventArgs e)
        {
            float TotalSeconds = PC.NextValue();

            this.Text = String.Format("硬盘已经使用了{0:0.0}小时", TotalSeconds / 60 / 60);
        }
    }
}
