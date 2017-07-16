namespace TEST
{
    partial class Form1
    {
        /// <summary>
        /// 必需的设计器变量。
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 清理所有正在使用的资源。
        /// </summary>
        /// <param name="disposing">如果应释放托管资源，为 true；否则为 false。</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows 窗体设计器生成的代码

        /// <summary>
        /// 设计器支持所需的方法 - 不要修改
        /// 使用代码编辑器修改此方法的内容。
        /// </summary>
        private void InitializeComponent()
        {
            this.txtIP = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.txtPORT = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.txtMsg = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.txtsendMsg = new System.Windows.Forms.TextBox();
            this.btnServerConn = new System.Windows.Forms.Button();
            this.btnSendMsg = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // txtIP
            // 
            this.txtIP.Location = new System.Drawing.Point(72, 43);
            this.txtIP.Name = "txtIP";
            this.txtIP.Size = new System.Drawing.Size(100, 21);
            this.txtIP.TabIndex = 0;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(27, 51);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(41, 12);
            this.label1.TabIndex = 1;
            this.label1.Text = "label1";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(236, 52);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(41, 12);
            this.label2.TabIndex = 2;
            this.label2.Text = "label2";
            // 
            // txtPORT
            // 
            this.txtPORT.Location = new System.Drawing.Point(302, 48);
            this.txtPORT.Name = "txtPORT";
            this.txtPORT.Size = new System.Drawing.Size(100, 21);
            this.txtPORT.TabIndex = 3;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(27, 107);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(41, 12);
            this.label3.TabIndex = 4;
            this.label3.Text = "label3";
            // 
            // txtMsg
            // 
            this.txtMsg.Location = new System.Drawing.Point(121, 104);
            this.txtMsg.Name = "txtMsg";
            this.txtMsg.Size = new System.Drawing.Size(100, 21);
            this.txtMsg.TabIndex = 5;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(27, 275);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(41, 12);
            this.label4.TabIndex = 6;
            this.label4.Text = "label4";
            // 
            // txtsendMsg
            // 
            this.txtsendMsg.Location = new System.Drawing.Point(121, 266);
            this.txtsendMsg.Name = "txtsendMsg";
            this.txtsendMsg.Size = new System.Drawing.Size(100, 21);
            this.txtsendMsg.TabIndex = 7;
            // 
            // btnServerConn
            // 
            this.btnServerConn.Location = new System.Drawing.Point(446, 51);
            this.btnServerConn.Name = "btnServerConn";
            this.btnServerConn.Size = new System.Drawing.Size(75, 23);
            this.btnServerConn.TabIndex = 8;
            this.btnServerConn.Text = "button1";
            this.btnServerConn.UseVisualStyleBackColor = true;
            this.btnServerConn.Click += new System.EventHandler(this.btnServerConn_Click);
            // 
            // btnSendMsg
            // 
            this.btnSendMsg.Location = new System.Drawing.Point(344, 275);
            this.btnSendMsg.Name = "btnSendMsg";
            this.btnSendMsg.Size = new System.Drawing.Size(75, 23);
            this.btnSendMsg.TabIndex = 9;
            this.btnSendMsg.Text = "button2";
            this.btnSendMsg.UseVisualStyleBackColor = true;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(641, 415);
            this.Controls.Add(this.btnSendMsg);
            this.Controls.Add(this.btnServerConn);
            this.Controls.Add(this.txtsendMsg);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.txtMsg);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.txtPORT);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.txtIP);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox txtIP;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox txtPORT;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox txtMsg;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.TextBox txtsendMsg;
        private System.Windows.Forms.Button btnServerConn;
        private System.Windows.Forms.Button btnSendMsg;
    }
}

